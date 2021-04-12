/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDSourceEntity, NSString;

@interface HDSourceRevision : NSObject {

	HDSourceEntity* _sourceEntity;
	NSString* _version;
	NSString* _productType;
	SCD_Struct_HD6 _operatingSystemVersion;

}

@property (nonatomic,readonly) HDSourceEntity * sourceEntity;                      //@synthesize sourceEntity=_sourceEntity - In the implementation block
@property (nonatomic,readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * productType;                             //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HD6 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
-(HDSourceEntity *)sourceEntity;
-(SCD_Struct_HD6)operatingSystemVersion;
-(NSString *)productType;
-(id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(SCD_Struct_HD6)arg4 ;
-(NSString *)version;
@end

