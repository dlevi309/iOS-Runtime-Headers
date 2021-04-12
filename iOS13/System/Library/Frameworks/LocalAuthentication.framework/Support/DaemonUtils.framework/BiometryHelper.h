/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)touchIdInstance;
+(id)pearlInstance;
+(id)_enumerateAvailableDevices;
+(BOOL)_loadBiometricKit;
+(Class)biometricKitClassFromString:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)identities;
-(BKDevice *)device;
-(long long)biometryType;
-(BOOL)isEnrolled:(id)arg1 error:(id*)arg2 ;
-(id)initWithBiometryType:(long long)arg1 ;
-(BOOL)deviceHasBiometryWithError:(id*)arg1 ;
-(id)_identitiesForUser:(id)arg1 ;
-(BOOL)_isEnrolled:(id)arg1 error:(id*)arg2 ;
-(BOOL)isBiometryOnForUnlock:(id)arg1 ;
-(unsigned)_uidFromUserId:(id)arg1 ;
-(id)_biolockoutStateForUser:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(id)_lockoutErrorForExtendedState:(long long)arg1 userId:(id)arg2 ;
-(BOOL)_protectedConfigrationBoolForUser:(id)arg1 queryBlock:(/*^block*/id)arg2 ;
-(void)_refreshIdentities;
-(BOOL)isAnyUserEnrolledWithError:(id*)arg1 ;
-(id)lockoutErrorForState:(long long)arg1 userId:(id)arg2 ;
-(BOOL)isLockedOutForUser:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(id)biometryDatabaseHashForUser:(id)arg1 error:(id*)arg2 ;
-(void)_clearHashes;
-(BOOL)userPresent:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)isBiometryOnForStockholm:(id)arg1 ;
-(BOOL)isIdentificationEnabled:(id)arg1 ;
-(id)catacombUUID:(id)arg1 ;
-(void)resetBiometry;
-(BOOL)isBiometryRunning;
@end

