/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(NSString *)referringAppName;
-(id)initWithReason:(long long)arg1 ;
-(void)setReferringAppName:(NSString *)arg1 ;
-(NSString *)referringURL;
-(void)setEnterTypeWithLaunchReason:(long long)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
@end

