/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
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

