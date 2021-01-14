/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HDHRSOriginInformation : NSObject <NSCopying, NSSecureCoding> {

	NSString* _operatingSystemBuild;
	SCD_Struct_HD2 _operatingSystemVersion;

}

@property (nonatomic,readonly) SCD_Struct_HD2 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * operatingSystemBuild;               //@synthesize operatingSystemBuild=_operatingSystemBuild - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentOSVersionWithProfile:(id)arg1 ;
-(SCD_Struct_HD2)operatingSystemVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOperatingSystemVersion:(SCD_Struct_HD2)arg1 build:(id)arg2 ;
-(NSString *)operatingSystemBuild;
@end

