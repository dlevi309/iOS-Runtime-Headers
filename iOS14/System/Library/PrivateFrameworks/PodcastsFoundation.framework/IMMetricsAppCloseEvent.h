/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppCloseEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * exitURL; 
-(id)initWithReason:(long long)arg1 ;
-(NSString *)exitURL;
-(void)setExitTypeWithSuspendReason:(long long)arg1 ;
-(void)setExitURL:(NSString *)arg1 ;
@end

