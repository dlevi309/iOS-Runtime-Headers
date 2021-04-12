/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppCloseEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * exitURL; 
-(id)initWithReason:(long long)arg1 ;
-(NSString *)exitURL;
-(void)setExitTypeWithSuspendReason:(long long)arg1 ;
-(void)setExitURL:(NSString *)arg1 ;
@end

