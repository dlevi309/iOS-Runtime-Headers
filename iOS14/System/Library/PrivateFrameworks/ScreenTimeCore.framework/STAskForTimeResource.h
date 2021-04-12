/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)changeHandler;
-(STAskForTimeRequest *)request;
-(int)notificationToken;
-(void)dealloc;
-(void)checkRequestForAdditionalTimeWithResponseHandler:(/*^block*/id)arg1 ;
-(STAskForTimeClient *)askForTimeClient;
-(void)_approveExceptionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithResourceIdentifier:(id)arg1 resourceDisplayName:(id)arg2 usageType:(long long)arg3 changeHandler:(/*^block*/id)arg4 ;
-(void)requestAdditionalTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)approveAdditionalTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)approveOneMoreMinuteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelOutstandingRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAskForTimeClient:(STAskForTimeClient *)arg1 ;
@end

