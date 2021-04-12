/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)version;
-(SCD_Struct_HD6)operatingSystemVersion;
-(NSString *)productType;
-(HDSourceEntity *)sourceEntity;
-(id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(SCD_Struct_HD6)arg4 ;
@end

