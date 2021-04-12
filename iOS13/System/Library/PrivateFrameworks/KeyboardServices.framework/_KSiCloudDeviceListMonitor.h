/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@class ACAccountStore, ACAccount;

@interface _KSiCloudDeviceListMonitor : NSObject {

	ACAccountStore* _accountStore;
	ACAccount* _account;
	long long _majorVersForCloudKitSyncMacOS;
	long long _minorVersForCloudKitSyncMacOS;
	long long _minorSubversionForCloudKitSyncMacOS;
	long long _majorVersForCloudKitSynciOS;
	long long _minorVersForCloudKitSynciOS;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long majorVersForCloudKitSyncMacOS;                    //@synthesize majorVersForCloudKitSyncMacOS=_majorVersForCloudKitSyncMacOS - In the implementation block
@property (assign,nonatomic) long long minorVersForCloudKitSyncMacOS;                    //@synthesize minorVersForCloudKitSyncMacOS=_minorVersForCloudKitSyncMacOS - In the implementation block
@property (assign,nonatomic) long long minorSubversionForCloudKitSyncMacOS;              //@synthesize minorSubversionForCloudKitSyncMacOS=_minorSubversionForCloudKitSyncMacOS - In the implementation block
@property (assign,nonatomic) long long majorVersForCloudKitSynciOS;                      //@synthesize majorVersForCloudKitSynciOS=_majorVersForCloudKitSynciOS - In the implementation block
@property (assign,nonatomic) long long minorVersForCloudKitSynciOS;                      //@synthesize minorVersForCloudKitSynciOS=_minorVersForCloudKitSynciOS - In the implementation block
+(id)iCloudDeviceListMonitor;
-(id)init;
-(void)dealloc;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)fetchCloudKitDevicesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchICloudDevicesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMajorVersForCloudKitSynciOS:(long long)arg1 ;
-(void)setMinorVersForCloudKitSynciOS:(long long)arg1 ;
-(void)setMajorVersForCloudKitSyncMacOS:(long long)arg1 ;
-(void)setMinorVersForCloudKitSyncMacOS:(long long)arg1 ;
-(void)setMinorSubversionForCloudKitSyncMacOS:(long long)arg1 ;
-(long long)majorVersForCloudKitSyncMacOS;
-(long long)majorVersForCloudKitSynciOS;
-(long long)minorVersForCloudKitSyncMacOS;
-(long long)minorVersForCloudKitSynciOS;
-(long long)minorSubversionForCloudKitSyncMacOS;
-(void)queryMigrationState;
-(void)isAccountCompatibleForCloudKitSyncingWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isSWVersionCloudKitSyncCompatible:(id)arg1 ;
-(void)resetDataNoAccount;
-(BOOL)canMigrateToCloudKit;
@end

