/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchableIndex.h>

@interface MDSearchableIndex : CSSearchableIndex
+(id)sharedInstance;
-(void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

