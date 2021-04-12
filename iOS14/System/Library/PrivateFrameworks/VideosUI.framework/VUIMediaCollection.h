/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

