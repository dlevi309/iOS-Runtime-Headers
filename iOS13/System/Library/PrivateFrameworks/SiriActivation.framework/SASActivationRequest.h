/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class SiriContext;

@interface SASActivationRequest : NSObject {

	int _waketimeMIB[12];
	unsigned long long _waketimeMIBSize;
	long long _activationType;
	long long _activationEvent;
	SiriContext* _context;
	double _activationTime;
	double _buttonDownTime;
	long long _requestSource;

}

@property (assign,nonatomic) long long requestSource;                //@synthesize requestSource=_requestSource - In the implementation block
@property (assign,nonatomic) long long activationType;               //@synthesize activationType=_activationType - In the implementation block
@property (assign,nonatomic) long long activationEvent;              //@synthesize activationEvent=_activationEvent - In the implementation block
@property (nonatomic,retain) SiriContext * context;                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double activationTime;                  //@synthesize activationTime=_activationTime - In the implementation block
@property (assign,nonatomic) double buttonDownTime;                  //@synthesize buttonDownTime=_buttonDownTime - In the implementation block
+(long long)requestSourceForButtonIdentifier:(long long)arg1 ;
-(id)init;
-(id)description;
-(SiriContext *)context;
-(void)setContext:(SiriContext *)arg1 ;
-(long long)activationType;
-(void)setActivationType:(long long)arg1 ;
-(long long)requestSource;
-(void)setRequestSource:(long long)arg1 ;
-(long long)activationEvent;
-(void)setActivationEvent:(long long)arg1 ;
-(void)setActivationTime:(double)arg1 ;
-(double)activationTime;
-(id)eventSource;
-(double)buttonDownTimestamp;
-(BOOL)isButtonRequest;
-(double)computedActivationTime;
-(BOOL)isDirectActionRequest;
-(BOOL)isBluetoothRequest;
-(BOOL)isContinuityRequest;
-(BOOL)isSpotlightRequest;
-(BOOL)isTestingRequest;
-(BOOL)isVoiceRequest;
-(id)initWithDirectActionEvent:(long long)arg1 context:(id)arg2 ;
-(id)initWithButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(id)initWithContinuityContext:(id)arg1 ;
-(id)initWithVoiceTriggerContext:(id)arg1 ;
-(id)initWithBreadcrumbRequest;
-(id)initWithSimpleActivation:(long long)arg1 ;
-(id)initWithSpotlightContext:(id)arg1 ;
-(id)initWithVoiceTriggerRequest;
-(id)initWithTestingContext:(id)arg1 ;
-(BOOL)isEyesFreeRequestSource;
-(BOOL)isUIFreeRequestSource;
-(void)setButtonDownTime:(double)arg1 ;
-(BOOL)isDeviceButtonRequest;
-(BOOL)isHoldToTalkSource;
-(double)buttonDownTime;
@end

