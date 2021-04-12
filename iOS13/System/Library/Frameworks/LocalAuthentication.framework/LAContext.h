/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
*/

#import <LocalAuthentication/LocalAuthentication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol LAPrearmContextXPC;
@class LAClient, NSNumber, NSData, NSString;

@interface LAContext : NSObject <NSSecureCoding> {

	LAClient* _client;
	id<LAPrearmContextXPC> _prearmContext;
	unsigned _instanceId;
	NSNumber* _maxBiometryFailures;
	NSData* _evaluatedPolicyDomainState;
	NSData* _externalizedContext;
	long long _biometryType;

}

@property (nonatomic,retain) NSData * externalizedContext;                                    //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (nonatomic,retain) NSData * evaluatedPolicyDomainState;                             //@synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState - In the implementation block
@property (assign,nonatomic) long long biometryType;                                          //@synthesize biometryType=_biometryType - In the implementation block
@property (nonatomic,retain) NSNumber * touchIDAuthenticationRetryLimit; 
@property (assign,nonatomic,__weak) id<LAUIDelegate> uiDelegate; 
@property (nonatomic,readonly) unsigned instanceId;                                           //@synthesize instanceId=_instanceId - In the implementation block
@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@property (nonatomic,retain) NSNumber * maxBiometryFailures;                                  //@synthesize maxBiometryFailures=_maxBiometryFailures - In the implementation block
@property (nonatomic,copy) NSString * localizedCancelTitle; 
@property (assign,nonatomic) double touchIDAuthenticationAllowableReuseDuration; 
@property (nonatomic,copy) NSString * localizedReason; 
@property (assign,nonatomic) BOOL interactionNotAllowed; 
+(BOOL)supportsSecureCoding;
+(unsigned)newCommandId;
+(unsigned)newInstanceId;
+(void)notifyEvent:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 ;
-(BOOL)isCredentialSet:(long long)arg1 ;
-(id)initWithExternalizedContext:(id)arg1 ;
-(NSData *)externalizedContext;
-(id)initWithExternalizedContext:(id)arg1 userSession:(unsigned*)arg2 ;
-(id)evaluateAccessControl:(SecAccessControlRef)arg1 aksOperation:(void*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(void)setLocalizedReason:(NSString *)arg1 ;
-(void)setLocalizedCancelTitle:(NSString *)arg1 ;
-(void)setTouchIDAuthenticationAllowableReuseDuration:(double)arg1 ;
-(void)setTouchIDAuthenticationRetryLimit:(NSNumber *)arg1 ;
-(NSString *)localizedReason;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setUiDelegate:(id<LAUIDelegate>)arg1 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(unsigned)instanceId;
-(void)retryProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)authMethodWithReply:(/*^block*/id)arg1 ;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetWithReply:(/*^block*/id)arg1 ;
-(id<LAUIDelegate>)uiDelegate;
-(id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 ;
-(void)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned)arg4 reply:(/*^block*/id)arg5 ;
-(id)_hashWithBundleIdentifier:(id)arg1 ;
-(void)setEvaluatedPolicyDomainState:(NSData *)arg1 ;
-(id)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned)arg4 error:(id*)arg5 ;
-(id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2 ;
-(id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id*)arg2 ;
-(id)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_evaluateAccessControl:(SecAccessControlRef)arg1 operation:(id)arg2 options:(id)arg3 log:(long long)arg4 cid:(unsigned)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned)arg4 reply:(/*^block*/id)arg5 ;
-(id)_serverPropertyValueForOption:(long long)arg1 log:(long long)arg2 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 log:(long long)arg3 ;
-(id)_serverPropertyValueForOption:(long long)arg1 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 ;
-(id)initWithUIDelegate:(id)arg1 ;
-(id)evaluationMechanismsForPolicy:(long long)arg1 error:(id*)arg2 ;
-(id)evaluationMechanismsForAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 error:(id*)arg3 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 aksOperation:(void*)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(void)prearmTouchIDWithReply:(/*^block*/id)arg1 ;
-(NSString *)localizedFallbackTitle;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedCancelTitle;
-(NSNumber *)touchIDAuthenticationRetryLimit;
-(double)touchIDAuthenticationAllowableReuseDuration;
-(id)optionNotInteractive;
-(void)setOptionNotInteractive:(id)arg1 ;
-(id)optionTimeout;
-(void)setOptionTimeout:(id)arg1 ;
-(id)optionCallerName;
-(void)setOptionCallerName:(id)arg1 ;
-(id)optionCallerPID;
-(void)setOptionCallerPID:(id)arg1 ;
-(id)optionUserFallback;
-(void)setOptionUserFallback:(id)arg1 ;
-(id)optionAuthenticationReason;
-(void)setOptionAuthenticationReason:(id)arg1 ;
-(id)optionMaxBiometryFailures;
-(void)setOptionMaxBiometryFailures:(id)arg1 ;
-(id)optionPresentationStyle;
-(void)setOptionPresentationStyle:(id)arg1 ;
-(id)optionTransitionStyle;
-(void)setOptionTransitionStyle:(id)arg1 ;
-(id)optionReturnBiometryDatabaseHash;
-(void)setOptionReturnBiometryDatabaseHash:(id)arg1 ;
-(id)optionCancelVisible;
-(void)setOptionCancelVisible:(id)arg1 ;
-(id)optionFallbackVisible;
-(void)setOptionFallbackVisible:(id)arg1 ;
-(id)optionPasscodeTitle;
-(void)setOptionPasscodeTitle:(id)arg1 ;
-(id)optionPINTitle;
-(void)setOptionPINTitle:(id)arg1 ;
-(id)optionPINLength;
-(void)setOptionPINLength:(id)arg1 ;
-(id)optionPINFirst;
-(void)setOptionPINFirst:(id)arg1 ;
-(id)optionSharedValidity;
-(void)setOptionSharedValidity:(id)arg1 ;
-(id)optionUserCancel;
-(void)setOptionUserCancel:(id)arg1 ;
-(id)optionTintColor;
-(void)setOptionTintColor:(id)arg1 ;
-(id)optionBiometryLockoutRecovery;
-(void)setOptionBiometryLockoutRecovery:(id)arg1 ;
-(id)optionSoftwareUpdateManifest;
-(void)setOptionSoftwareUpdateManifest:(id)arg1 ;
-(id)optionSoftwareUpdateStashMode;
-(void)setOptionSoftwareUpdateStashMode:(id)arg1 ;
-(id)optionPasswordAuthenticationReason;
-(void)setOptionPasswordAuthenticationReason:(id)arg1 ;
-(id)optionPasscodeScreenStyle;
-(void)setOptionPasscodeScreenStyle:(id)arg1 ;
-(id)optionPasscodeScreenBlur;
-(void)setOptionPasscodeScreenBlur:(id)arg1 ;
-(id)optionFaceDetectLength;
-(void)setOptionFaceDetectLength:(id)arg1 ;
-(id)optionCallerAuditToken;
-(void)setOptionCallerAuditToken:(id)arg1 ;
-(id)optionNoFailureUI;
-(void)setOptionNoFailureUI:(id)arg1 ;
-(id)optionFingerMustBeOff;
-(void)setOptionFingerMustBeOff:(id)arg1 ;
-(id)optionPhysicalButtonTitle;
-(void)setOptionPhysicalButtonTitle:(id)arg1 ;
-(id)optionCallerIconBundlePath;
-(void)setOptionCallerIconBundlePath:(id)arg1 ;
-(id)optionMatchForUnlock;
-(void)setOptionMatchForUnlock:(id)arg1 ;
-(long long)biometryType;
-(id)optionAuthenticationTitle;
-(void)setOptionAuthenticationTitle:(id)arg1 ;
-(BOOL)interactionNotAllowed;
-(void)setInteractionNotAllowed:(BOOL)arg1 ;
-(NSNumber *)maxBiometryFailures;
-(void)setMaxBiometryFailures:(NSNumber *)arg1 ;
-(NSData *)evaluatedPolicyDomainState;
-(void)setBiometryType:(long long)arg1 ;
@end

