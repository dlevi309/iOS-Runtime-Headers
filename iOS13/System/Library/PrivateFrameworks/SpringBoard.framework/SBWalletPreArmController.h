/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isPreArmTriggeredByLockButtonDoublePress;
-(BOOL)isPreArmAllowed;
-(void)presentPreArmInterfaceForTriggerSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPreArmAvailable;
-(BOOL)isPreArmExternallySuppressed;
-(id)acquireSuppressPreArmAssertionOfType:(long long)arg1 forReason:(id)arg2 ;
-(id)acquireSuppressPreArmAssertionForReason:(id)arg1 ;
-(BOOL)isPreArmSuppressed;
-(BOOL)isPreArmTriggeredByHomeButtonDoublePress;
-(id)initWithPassLibrary:(id)arg1 biometricResource:(id)arg2 ;
-(long long)_computeTriggerSource;
-(long long)_contactlessInterfaceSourceForTriggerSource:(long long)arg1 ;
@end

