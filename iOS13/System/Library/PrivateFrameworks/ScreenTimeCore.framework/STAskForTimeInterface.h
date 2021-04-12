/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@protocol STAskForTimeInterface <NSObject>
@required
-(void)sendAskForTimeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)approveExceptionForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

