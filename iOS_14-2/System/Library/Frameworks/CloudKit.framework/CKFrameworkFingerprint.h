/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSNumber;

@interface CKFrameworkFingerprint : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _uuid;
	NSNumber* _version;
	NSNumber* _cpuType;
	NSNumber* _cpuSubtype;

}

@property (nonatomic,copy) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSNumber * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSNumber * cpuType;                 //@synthesize cpuType=_cpuType - In the implementation block
@property (nonatomic,copy) NSNumber * cpuSubtype;              //@synthesize cpuSubtype=_cpuSubtype - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)versionString;
-(NSUUID *)uuid;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)populate;
-(id)description;
-(void)setCpuType:(NSNumber *)arg1 ;
-(NSNumber *)cpuSubtype;
-(void)setCpuSubtype:(NSNumber *)arg1 ;
-(BOOL)isLikelyEqual:(id)arg1 ;
-(NSNumber *)cpuType;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSNumber *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

