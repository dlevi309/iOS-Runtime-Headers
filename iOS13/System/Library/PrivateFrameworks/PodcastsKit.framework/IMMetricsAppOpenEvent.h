/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(id)initWithReason:(long long)arg1 ;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(void)setEnterTypeWithLaunchReason:(long long)arg1 ;
@end

