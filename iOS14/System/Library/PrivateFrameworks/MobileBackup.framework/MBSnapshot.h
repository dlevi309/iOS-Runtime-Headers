/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MBSnapshot : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _snapshotID;
	NSString* _snapshotUUID;
	NSString* _deviceName;
	NSDate* _date;
	NSDate* _created;
	NSDate* _modified;
	int _state;
	BOOL _isCompatible;
	NSString* _systemVersion;
	NSString* _buildVersion;
	unsigned long long _quotaReserved;
	NSString* _requiredProductVersion;
	long long _backupType;

}

@property (assign,nonatomic) long long backupType;                            //@synthesize backupType=_backupType - In the implementation block
@property (nonatomic,retain) NSString * requiredProductVersion;               //@synthesize requiredProductVersion=_requiredProductVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long snapshotID;                 //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,readonly) NSString * snapshotUUID;                       //@synthesize snapshotUUID=_snapshotUUID - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSDate * created;                              //@synthesize created=_created - In the implementation block
@property (nonatomic,readonly) NSDate * modified;                             //@synthesize modified=_modified - In the implementation block
@property (nonatomic,readonly) int state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isCompatible;                             //@synthesize isCompatible=_isCompatible - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                      //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                       //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long quotaReserved;              //@synthesize quotaReserved=_quotaReserved - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)systemVersion;
-(NSString *)deviceName;
-(unsigned long long)snapshotID;
-(NSString *)snapshotUUID;
-(BOOL)isCompatible;
-(unsigned long long)quotaReserved;
-(id)initWithSnapshotID:(unsigned long long)arg1 snapshotUUID:(id)arg2 deviceName:(id)arg3 date:(id)arg4 created:(id)arg5 modified:(id)arg6 state:(int)arg7 isCompatible:(BOOL)arg8 systemVersion:(id)arg9 buildVersion:(id)arg10 quotaReserved:(unsigned long long)arg11 backupType:(long long)arg12 ;
-(long long)backupType;
-(void)setBackupType:(long long)arg1 ;
-(id)initWithSnapshotID:(unsigned long long)arg1 deviceName:(id)arg2 date:(id)arg3 created:(id)arg4 modified:(id)arg5 state:(int)arg6 isCompatible:(BOOL)arg7 systemVersion:(id)arg8 buildVersion:(id)arg9 quotaReserved:(unsigned long long)arg10 backupType:(long long)arg11 ;
-(NSDate *)created;
-(id)initWithSnapshotUUID:(id)arg1 snapshotID:(unsigned long long)arg2 deviceName:(id)arg3 date:(id)arg4 created:(id)arg5 modified:(id)arg6 state:(int)arg7 isCompatible:(BOOL)arg8 systemVersion:(id)arg9 buildVersion:(id)arg10 quotaReserved:(unsigned long long)arg11 backupType:(long long)arg12 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)modified;
-(id)description;
-(NSString *)buildVersion;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(NSString *)requiredProductVersion;
-(void)setRequiredProductVersion:(NSString *)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

