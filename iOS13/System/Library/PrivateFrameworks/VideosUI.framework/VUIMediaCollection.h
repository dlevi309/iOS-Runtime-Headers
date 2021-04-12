/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaEntity.h>

@class NSDate, NSNumber;

@interface VUIMediaCollection : VUIMediaEntity

@property (nonatomic,copy,readonly) NSDate * addedToDate; 
@property (nonatomic,copy,readonly) NSNumber * mediaItemCount; 
@property (nonatomic,copy,readonly) NSNumber * seasonCount; 
-(id)description;
-(NSNumber *)seasonCount;
-(NSDate *)addedToDate;
-(NSNumber *)mediaItemCount;
@end

