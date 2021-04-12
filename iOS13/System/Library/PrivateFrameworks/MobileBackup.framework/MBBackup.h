/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MBBackup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _backupUDID;
	NSString* _deviceClass;
	NSString* _productType;
	NSString* _hardwareModel;
	NSString* _marketingName;
	NSArray* _snapshots;
	BOOL _restoreSystemFiles;
	BOOL _isMBSBackup;
	BOOL _isBackupEnabled;
	BOOL _hasBackupEnabledState;
	NSString* _backupUUID;

}

@property (nonatomic,readonly) NSString * backupUDID;                                             //@synthesize backupUDID=_backupUDID - In the implementation block
@property (nonatomic,readonly) NSString * backupUUID;                                             //@synthesize backupUUID=_backupUUID - In the implementation block
@property (nonatomic,readonly) NSString * backupUUIDSansPrefix; 
@property (nonatomic,readonly) NSString * deviceClass;                                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                            //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) NSString * hardwareModel;                                          //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) NSString * marketingName;                                          //@synthesize marketingName=_marketingName - In the implementation block
@property (nonatomic,readonly) NSArray * snapshots;                                               //@synthesize snapshots=_snapshots - In the implementation block
@property (getter=canRestoreSystemFiles,nonatomic,readonly) BOOL restoreSystemFiles;              //@synthesize restoreSystemFiles=_restoreSystemFiles - In the implementation block
@property (nonatomic,readonly) BOOL isMBSBackup;                                                  //@synthesize isMBSBackup=_isMBSBackup - In the implementation block
@property (nonatomic,readonly) BOOL isBackupEnabled;                                              //@synthesize isBackupEnabled=_isBackupEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasBackupEnabledState;                                        //@synthesize hasBackupEnabledState=_hasBackupEnabledState - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hardwareModel;
-(NSString *)productType;
-(NSString *)deviceClass;
-(NSArray *)snapshots;
-(NSString *)backupUUID;
-(NSString *)marketingName;
-(BOOL)isBackupEnabled;
-(id)initWithBackupUDID:(id)arg1 backupUUID:(id)arg2 deviceClass:(id)arg3 productType:(id)arg4 hardwareModel:(id)arg5 marketingName:(id)arg6 snapshots:(id)arg7 restoreSystemFiles:(BOOL)arg8 isMBSBackup:(BOOL)arg9 isBackupEnabled:(BOOL)arg10 hasBackupEnabledState:(BOOL)arg11 ;
-(NSString *)backupUDID;
-(NSString *)backupUUIDSansPrefix;
-(BOOL)canRestoreSystemFiles;
-(BOOL)isMBSBackup;
-(BOOL)hasBackupEnabledState;
@end

