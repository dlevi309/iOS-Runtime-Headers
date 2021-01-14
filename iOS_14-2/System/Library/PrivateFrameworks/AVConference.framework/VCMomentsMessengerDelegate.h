/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMomentsMessengerDelegate <NSObject>
@required
-(void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;
-(void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(BOOL)arg3;
-(void)streamTokenDidCleanupAllRequests:(long long)arg1;

@end

