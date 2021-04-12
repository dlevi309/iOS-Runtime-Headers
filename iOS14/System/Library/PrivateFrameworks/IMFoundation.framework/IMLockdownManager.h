/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)_state;
-(void)_setState:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)_hasShownWaitingAlertThisSession;
-(NSString *)uniqueDeviceIdentifier;
-(BOOL)_isCarrierInstall;
-(void)_calculateInstallType;
-(BOOL)_hasShownMismatchedSIM;
-(void)set_hasShownMismatchedSIM:(BOOL)arg1 ;
-(void)_resetActivationState;
-(void)set_isCarrierInstall:(BOOL)arg1 ;
-(BOOL)_isNonUIInstall;
-(void)set_isVendorInstall:(BOOL)arg1 ;
-(BOOL)isNonUIInstall;
-(id)description;
-(BOOL)_isVendorInstall;
-(void)_setupActivationState;
-(BOOL)isActivated;
-(void)set_isNonUIInstall:(BOOL)arg1 ;
-(BOOL)isVendorInstall;
-(BOOL)isExpired;
-(BOOL)_settingUpActivationState;
-(BOOL)isCarrierInstall;
-(long long)lockdownState;
-(BOOL)isInternalInstall;
-(void)set_isInternalInstall:(BOOL)arg1 ;
-(void)set_settingUpActivationState:(BOOL)arg1 ;
-(void)set_hasShownWaitingAlertThisSession:(BOOL)arg1 ;
-(BOOL)_isInternalInstall;
-(void)dealloc;
@end

