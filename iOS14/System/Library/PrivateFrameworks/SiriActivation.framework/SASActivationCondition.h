/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SASSystemState *)systemState;
-(void)setRequestState:(long long)arg1 ;
-(long long)requestState;
-(void)setRequest:(SASActivationRequest *)arg1 ;
-(AFPreferences *)preferences;
-(void)setPreferences:(AFPreferences *)arg1 ;
-(SASActivationRequest *)request;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(NSDictionary *)analyticsContext;
-(void)setButtonTriggerStateActive:(BOOL)arg1 ;
-(void)setPocketStateManager:(SASSiriPocketStateManager *)arg1 ;
-(SASSiriPocketStateManager *)pocketStateManager;
-(BOOL)buttonTriggerStateActive;
-(void)setAnalyticsContext:(NSDictionary *)arg1 ;
@end

