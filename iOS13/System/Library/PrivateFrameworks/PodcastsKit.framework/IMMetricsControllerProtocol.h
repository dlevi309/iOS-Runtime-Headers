/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

@class NSString;


@protocol IMMetricsControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * topic; 
@required
-(NSString *)topic;
-(void)recordEvent:(id)arg1;
-(BOOL)shouldSuppressUserInfo;
-(void)flushImmediately;
-(BOOL)shouldIgnoreDNU;

@end

