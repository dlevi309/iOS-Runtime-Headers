/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSString;

@interface IMLockdownManager : NSObject {

	BOOL _settingUpActivationState;
	BOOL _isInternalInstall;
	BOOL _isCarrierInstall;
	BOOL _isNonUIInstall;
	BOOL _isVendorInstall;
	BOOL _hasShownMismatchedSIM;
	BOOL _hasShownWaitingAlertThisSession;
	unsigned long long _state;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long _state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL _settingUpActivationState;                           //@synthesize settingUpActivationState=_settingUpActivationState - In the implementation block
@property (assign,nonatomic) BOOL _isVendorInstall;                                    //@synthesize isVendorInstall=_isVendorInstall - In the implementation block
@property (assign,nonatomic) BOOL _isInternalInstall;                                  //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
@property (assign,nonatomic) BOOL _isNonUIInstall;                                     //@synthesize isNonUIInstall=_isNonUIInstall - In the implementation block
@property (assign,nonatomic) BOOL _isCarrierInstall;                                   //@synthesize isCarrierInstall=_isCarrierInstall - In the implementation block
@property (assign,nonatomic) BOOL _hasShownWaitingAlertThisSession;                    //@synthesize hasShownWaitingAlertThisSession=_hasShownWaitingAlertThisSession - In the implementation block
@property (assign,nonatomic) BOOL _hasShownMismatchedSIM;                              //@synthesize hasShownMismatchedSIM=_hasShownMismatchedSIM - In the implementation block
@property (nonatomic,readonly) BOOL isNonUIInstall; 
@property (nonatomic,readonly) BOOL isVendorInstall; 
@property (nonatomic,readonly) BOOL isInternalInstall; 
@property (nonatomic,readonly) BOOL isCarrierInstall; 
@property (nonatomic,readonly) BOOL isActivated; 
@property (nonatomic,readonly) BOOL isExpired; 
@property (nonatomic,readonly) NSString * uniqueDeviceIdentifier; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)_state;
-(NSString *)uniqueDeviceIdentifier;
-(BOOL)isInternalInstall;
-(BOOL)isCarrierInstall;
-(void)_setState:(unsigned long long)arg1 ;
-(BOOL)isExpired;
-(BOOL)_isInternalInstall;
-(BOOL)isActivated;
-(BOOL)isNonUIInstall;
-(BOOL)isVendorInstall;
-(void)_calculateInstallType;
-(void)_setupActivationState;
-(long long)lockdownState;
-(void)_resetActivationState;
-(BOOL)_settingUpActivationState;
-(void)set_settingUpActivationState:(BOOL)arg1 ;
-(void)set_isInternalInstall:(BOOL)arg1 ;
-(BOOL)_isCarrierInstall;
-(void)set_isCarrierInstall:(BOOL)arg1 ;
-(BOOL)_isNonUIInstall;
-(void)set_isNonUIInstall:(BOOL)arg1 ;
-(BOOL)_isVendorInstall;
-(void)set_isVendorInstall:(BOOL)arg1 ;
-(BOOL)_hasShownMismatchedSIM;
-(void)set_hasShownMismatchedSIM:(BOOL)arg1 ;
-(BOOL)_hasShownWaitingAlertThisSession;
-(void)set_hasShownWaitingAlertThisSession:(BOOL)arg1 ;
@end

