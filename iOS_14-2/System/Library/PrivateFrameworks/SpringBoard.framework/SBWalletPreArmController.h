/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBUIBiometricResource;
@class PKPassLibrary, NSHashTable, NSMutableDictionary;

@interface SBWalletPreArmController : NSObject {

	PKPassLibrary* _passLibrary;
	id<SBUIBiometricResource> _biometricResource;
	long long _triggerSource;
	NSHashTable* _disabledPreArmAssertions;
	NSMutableDictionary* _disabledPreArmAssertionsByType;

}

@property (getter=isPreArmAvailable,nonatomic,readonly) BOOL preArmAvailable; 
@property (getter=isPreArmAllowed,nonatomic,readonly) BOOL preArmAllowed; 
@property (getter=isPreArmTriggeredByLockButtonDoublePress,nonatomic,readonly) BOOL preArmTriggeredByLockButtonDoublePress; 
@property (getter=isPreArmTriggeredByHomeButtonDoublePress,nonatomic,readonly) BOOL preArmTriggeredByHomeButtonDoublePress; 
@property (getter=isPreArmSuppressed,nonatomic,readonly) BOOL preArmSuppressed; 
@property (getter=isPreArmExternallySuppressed,nonatomic,readonly) BOOL preArmExternallySuppressed; 
+(id)sharedInstance;
-(BOOL)isPreArmAvailable;
-(id)init;
-(BOOL)isPreArmAllowed;
-(id)acquireSuppressPreArmAssertionOfType:(long long)arg1 forReason:(id)arg2 ;
-(BOOL)isPreArmTriggeredByLockButtonDoublePress;
-(BOOL)isPreArmTriggeredByHomeButtonDoublePress;
-(BOOL)isPreArmExternallySuppressed;
-(id)acquireSuppressPreArmAssertionForReason:(id)arg1 ;
-(id)initWithPassLibrary:(id)arg1 biometricResource:(id)arg2 ;
-(BOOL)isPreArmSuppressed;
-(void)presentPreArmInterfaceForTriggerSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_computeTriggerSource;
-(long long)_contactlessInterfaceSourceForTriggerSource:(long long)arg1 ;
@end

