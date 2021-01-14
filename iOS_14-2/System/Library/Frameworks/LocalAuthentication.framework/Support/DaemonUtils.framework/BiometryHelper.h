/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


@class NSMutableDictionary, NSDictionary, BKDevice;

@interface BiometryHelper : NSObject {

	NSMutableDictionary* _databaseHashesByUserId;
	BOOL _biometryRunning;
	NSDictionary* _identities;
	BKDevice* _device;
	long long _biometryType;

}

@property (getter=isBiometryRunning,nonatomic,readonly) BOOL biometryRunning;              //@synthesize biometryRunning=_biometryRunning - In the implementation block
@property (nonatomic,readonly) NSDictionary * identities;                                  //@synthesize identities=_identities - In the implementation block
@property (nonatomic,readonly) BKDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long biometryType;                                     //@synthesize biometryType=_biometryType - In the implementation block
+(id)sharedInstance;
+(id)_enumerateAvailableDevices;
+(id)pearlInstance;
+(Class)biometricKitClassFromString:(id)arg1 ;
+(BOOL)_loadBiometricKit;
+(id)touchIdInstance;
-(void)_refreshIdentities;
-(id)biometryDatabaseHashForUser:(id)arg1 error:(id*)arg2 ;
-(id)initWithBiometryType:(long long)arg1 ;
-(BOOL)userPresent:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)isBiometryOnForUnlock:(id)arg1 ;
-(BOOL)isLockedOutForUser:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(BOOL)isAnyUserEnrolledWithError:(id*)arg1 ;
-(id)catacombUUID:(id)arg1 ;
-(BKDevice *)device;
-(void)_clearHashes;
-(id)_identitiesForUser:(id)arg1 ;
-(id)lockoutErrorForState:(long long)arg1 userId:(id)arg2 ;
-(id)_lockoutErrorForExtendedState:(long long)arg1 userId:(id)arg2 ;
-(BOOL)deviceHasBiometryWithError:(id*)arg1 ;
-(long long)biometryType;
-(BOOL)isIdentificationEnabled:(id)arg1 ;
-(BOOL)isEnrolled:(id)arg1 error:(id*)arg2 ;
-(BOOL)isBiometryOnForStockholm:(id)arg1 ;
-(BOOL)_protectedConfigrationBoolForUser:(id)arg1 queryBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)identities;
-(unsigned)_uidFromUserId:(id)arg1 ;
-(BOOL)isBiometryRunning;
-(id)_biolockoutStateForUser:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(void)resetBiometry;
-(void)dealloc;
-(BOOL)_isEnrolled:(id)arg1 error:(id*)arg2 ;
@end

