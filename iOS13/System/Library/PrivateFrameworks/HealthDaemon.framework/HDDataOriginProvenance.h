/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying> {

	long long _syncProvenance;
	NSString* _productType;
	NSString* _systemBuild;
	NSString* _sourceVersion;
	NSString* _timeZoneName;
	NSNumber* _sourceID;
	NSNumber* _deviceID;
	SCD_Struct_HD6 _operatingSystemVersion;

}

@property (assign,nonatomic) long long syncProvenance;                           //@synthesize syncProvenance=_syncProvenance - In the implementation block
@property (nonatomic,copy) NSString * productType;                               //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy) NSString * systemBuild;                               //@synthesize systemBuild=_systemBuild - In the implementation block
@property (assign,nonatomic) SCD_Struct_HD6 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                             //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy) NSString * timeZoneName;                              //@synthesize timeZoneName=_timeZoneName - In the implementation block
@property (nonatomic,retain) NSNumber * sourceID;                                //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                                //@synthesize deviceID=_deviceID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataProvenanceWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 operatingSystemVersion:(SCD_Struct_HD6)arg4 sourceVersion:(id)arg5 timeZoneName:(id)arg6 sourceID:(id)arg7 deviceID:(id)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_HD6)operatingSystemVersion;
-(NSNumber *)deviceID;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)sourceID;
-(void)setSourceID:(NSNumber *)arg1 ;
-(NSString *)productType;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(NSString *)timeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(void)setOperatingSystemVersion:(SCD_Struct_HD6)arg1 ;
-(long long)syncProvenance;
-(NSString *)systemBuild;
-(void)setSyncProvenance:(long long)arg1 ;
-(void)setSystemBuild:(NSString *)arg1 ;
@end

