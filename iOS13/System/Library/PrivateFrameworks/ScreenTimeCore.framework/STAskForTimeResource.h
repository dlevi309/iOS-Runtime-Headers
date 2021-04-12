/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class STAskForTimeClient, STAskForTimeRequest;

@interface STAskForTimeResource : NSObject {

	int _notificationToken;
	STAskForTimeClient* _askForTimeClient;
	STAskForTimeRequest* _request;
	/*^block*/id _changeHandler;

}

@property (nonatomic,retain) STAskForTimeClient * askForTimeClient;              //@synthesize askForTimeClient=_askForTimeClient - In the implementation block
@property (nonatomic,readonly) STAskForTimeRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) int notificationToken;                            //@synthesize notificationToken=_notificationToken - In the implementation block
@property (nonatomic,readonly) id changeHandler;                                 //@synthesize changeHandler=_changeHandler - In the implementation block
-(void)dealloc;
-(STAskForTimeRequest *)request;
-(id)changeHandler;
-(int)notificationToken;
-(void)approveOneMoreMinuteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)approveAdditionalTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestAdditionalTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkRequestForAdditionalTimeWithResponseHandler:(/*^block*/id)arg1 ;
-(STAskForTimeClient *)askForTimeClient;
-(void)_approveExceptionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithResourceIdentifier:(id)arg1 resourceDisplayName:(id)arg2 usageType:(long long)arg3 changeHandler:(/*^block*/id)arg4 ;
-(void)cancelOutstandingRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAskForTimeClient:(STAskForTimeClient *)arg1 ;
@end

