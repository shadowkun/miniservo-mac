//
//  MSBookmark.h
//  MiniServo
//
//  Created by Patrick Walton on 11/29/14.
//  Copyright (c) 2014 Mozilla Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MSBookmarkOrHistoryEntry.h"

@interface MSBookmark : NSManagedObject <MSBookmarkOrHistoryEntry>

@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSString * title;

@end
