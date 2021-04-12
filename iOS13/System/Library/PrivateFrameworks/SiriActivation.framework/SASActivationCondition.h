/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class SASActivationRequest, SASSystemState, SASSiriPocketStateManager, AFPreferences, NSDictionary;

@interface SASActivationCondition : NSObject {

	BOOL _buttonTriggerStateActive;
	SASActivationRequest* _request;
	SASSystemState* _systemState;
	SASSiriPocketStateManager* _pocketStateManager;
	AFPreferences* _preferences;
	NSDictionary* _analyticsContext;
	long long _requestState;

}

@property (nonatomic,retain) SASActivationRequest * request;                              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL buttonTriggerStateActive;                               //@synthesize buttonTriggerStateActive=_buttonTriggerStateActive - In the implementation block
@property (nonatomic,retain) SASSystemState * systemState;                                //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,retain) SASSiriPocketStateManager * pocketStateManager;              //@synthesize pocketStateManager=_pocketStateManager - In the implementation block
@property (nonatomic,retain) AFPreferences * preferences;                                 //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsContext;                             //@synthesize analyticsContext=_analyticsContext - In the implementation block
@property (assign,nonatomic) long long requestState;                                      //@synthesize requestState=_requestState - In the implementation block
-(void)setRequest:(SASActivationRequest *)arg1 ;
-(SASActivationRequest *)request;
-(void)setPreferences:(AFPreferences *)arg1 ;
-(AFPreferences *)preferences;
-(long long)requestState;
-(void)setRequestState:(long long)arg1 ;
-(SASSystemState *)systemState;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(void)setButtonTriggerStateActive:(BOOL)arg1 ;
-(void)setPocketStateManager:(SASSiriPocketStateManager *)arg1 ;
-(SASSiriPocketStateManager *)pocketStateManager;
-(BOOL)buttonTriggerStateActive;
-(NSDictionary *)analyticsContext;
-(void)setAnalyticsContext:(NSDictionary *)arg1 ;
@end

