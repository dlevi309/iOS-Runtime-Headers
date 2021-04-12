/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)notifyEvent:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_optionsForEvent:(long long)arg1 ;
+(unsigned)newInstanceId;
+(void)notifyEvent:(long long)arg1 ;
+(unsigned)newCommandId;
-(unsigned)instanceId;
-(id)optionMatchForUnlock;
-(double)touchIDAuthenticationAllowableReuseDuration;
-(id)optionNoFailureUI;
-(id)optionPhysicalButtonTitle;
-(void)setOptionPasscodeScreenBlur:(id)arg1 ;
-(void)setOptionReturnBiometryDatabaseHash:(id)arg1 ;
-(id)optionPINMinLength;
-(id)optionPasswordAuthenticationReason;
-(id)optionPINCharset;
-(void)setOptionPINTitle:(id)arg1 ;
-(id)uuid;
-(id)optionFaceDetectLength;
-(void)setOptionFallbackVisible:(id)arg1 ;
-(id)init;
-(void)setBiometryType:(long long)arg1 ;
-(BOOL)interactionNotAllowed;
-(void)setOptionSoftwareUpdateStashMode:(id)arg1 ;
-(void)resetProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setOptionPasswordAuthenticationReason:(id)arg1 ;
-(id)optionReturnBiometryDatabaseHash;
-(id)optionPasscodeTitle;
-(id)optionSoftwareUpdateManifest;
-(id)optionTimeout;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned)arg4 error:(id*)arg5 ;
-(void)setOptionSoftwareUpdateManifest:(id)arg1 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 ;
-(void)setOptionNotInteractive:(id)arg1 ;
-(void)setOptionSecurePassphrase:(id)arg1 ;
-(void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)optionBiometryLockoutRecovery;
-(id<LAUIDelegate>)uiDelegate;
-(id)optionSoftwareUpdateStashMode;
-(void)setOptionPINCharset:(id)arg1 ;
-(id)optionUserCancel;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 ;
-(id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id*)arg2 ;
-(id)optionPresentationStyle;
-(void)setOptionFaceDetectLength:(id)arg1 ;
-(NSData *)evaluatedPolicyDomainState;
-(void)setOptionPINMaxLength:(id)arg1 ;
-(void)setOptionPasscodeTitle:(id)arg1 ;
-(NSNumber *)touchIDAuthenticationRetryLimit;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 aksOperation:(void*)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithExternalizedContext:(id)arg1 ;
-(id)optionPINTitle;
-(void)retryProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)optionTransitionStyle;
-(id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setOptionMaxBiometryFailures:(id)arg1 ;
-(void)prearmTouchIDWithReply:(/*^block*/id)arg1 ;
-(id)description;
-(id)optionPINMaxLength;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(id)_serverPropertyValueForOption:(long long)arg1 ;
-(id)optionFingerMustBeOff;
-(void)setLocalizedCancelTitle:(NSString *)arg1 ;
-(void)setOptionCallerPID:(id)arg1 ;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(NSData *)externalizedContext;
-(id)_serverPropertyValueForOption:(long long)arg1 log:(long long)arg2 ;
-(void)bootstrapServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)localizedFallbackTitle;
-(void)_evaluateAccessControl:(SecAccessControlRef)arg1 operation:(id)arg2 options:(id)arg3 log:(long long)arg4 cid:(unsigned)arg5 reply:(/*^block*/id)arg6 ;
-(id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2 ;
-(id)optionNotInteractive;
-(void)authMethodWithReply:(/*^block*/id)arg1 ;
-(void)setLocalizedReason:(NSString *)arg1 ;
-(void)setOptionPINFirst:(id)arg1 ;
-(long long)biometryType;
-(void)setCredential:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetWithReply:(/*^block*/id)arg1 ;
-(id)optionAuthenticationReason;
-(id)optionPINLength;
-(void)setOptionBiometryLockoutRecovery:(id)arg1 ;
-(void)setOptionCallerName:(id)arg1 ;
-(id)optionFallbackVisible;
-(void)setOptionAuthenticationTitle:(id)arg1 ;
-(id)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned)arg4 error:(id*)arg5 ;
-(void)setOptionFingerMustBeOff:(id)arg1 ;
-(void)setEvaluatedPolicyDomainState:(NSData *)arg1 ;
-(id)optionCallerAuditToken;
-(void)setOptionPINMinLength:(id)arg1 ;
-(void)setUiDelegate:(id<LAUIDelegate>)arg1 ;
-(unsigned long long)hash;
-(id)evaluationMechanismsForAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 error:(id*)arg3 ;
-(id)optionPasscodeScreenStyle;
-(id)evaluationMechanismsForPolicy:(long long)arg1 error:(id*)arg2 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)maxBiometryFailures;
-(id)optionSecurePassphrase;
-(void)invalidate;
-(void)setOptionPINLength:(id)arg1 ;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(void)setOptionTimeout:(id)arg1 ;
-(void)setOptionPasscodeScreenStyle:(id)arg1 ;
-(void)setMaxBiometryFailures:(NSNumber *)arg1 ;
-(id)optionTintColor;
-(id)optionPasscodeScreenBlur;
-(void)setOptionCallerAuditToken:(id)arg1 ;
-(void)credentialOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)localizedCancelTitle;
-(void)setOptionTintColor:(id)arg1 ;
-(void)setOptionNoFailureUI:(id)arg1 ;
-(void)setOptionMatchForUnlock:(id)arg1 ;
-(id)evaluateAccessControl:(SecAccessControlRef)arg1 aksOperation:(void*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)checkContextValidWithError:(id*)arg1 ;
-(id)optionUserFallback;
-(BOOL)isCredentialSet:(long long)arg1 ;
-(void)setTouchIDAuthenticationAllowableReuseDuration:(double)arg1 ;
-(id)optionCancelVisible;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setOptionUserFallback:(id)arg1 ;
-(id)credentialOfType:(long long)arg1 error:(id*)arg2 ;
-(void)setOptionPresentationStyle:(id)arg1 ;
-(void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(id)optionCallerIconBundlePath;
-(NSString *)localizedReason;
-(void)setOptionAuthenticationReason:(id)arg1 ;
-(void)setOptionPhysicalButtonTitle:(id)arg1 ;
-(void)setOptionTransitionStyle:(id)arg1 ;
-(void)setTouchIDAuthenticationRetryLimit:(NSNumber *)arg1 ;
-(id)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)setInteractionNotAllowed:(BOOL)arg1 ;
-(void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 log:(long long)arg3 ;
-(id)optionMaxBiometryFailures;
-(id)optionCallerName;
-(void)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned)arg4 reply:(/*^block*/id)arg5 ;
-(void)setOptionUserCancel:(id)arg1 ;
-(id)optionAuthenticationTitle;
-(id)initWithExternalizedContext:(id)arg1 userSession:(unsigned*)arg2 ;
-(void)setOptionCallerIconBundlePath:(id)arg1 ;
-(void)optionsForInternalOperation:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithUIDelegate:(id)arg1 ;
-(id)optionPINFirst;
-(void)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned)arg4 reply:(/*^block*/id)arg5 ;
-(id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 ;
-(id)optionSharedValidity;
-(id)_hashWithBundleIdentifier:(id)arg1 ;
-(void)setOptionSharedValidity:(id)arg1 ;
-(id)optionCallerPID;
-(void)setOptionCancelVisible:(id)arg1 ;
@end

