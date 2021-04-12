/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicy.h>

@class NSNumber, NSString;

@interface SUCorePolicyMacUpdateBrain : SUCorePolicy {

	NSNumber* _compatibilityVersion;
	NSString* _majorTargetBuildVersion;
	NSString* _minorTargetBuildVersion;

}

@property (nonatomic,retain) NSNumber * compatibilityVersion;                 //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,retain) NSString * majorTargetBuildVersion;              //@synthesize majorTargetBuildVersion=_majorTargetBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * minorTargetBuildVersion;              //@synthesize minorTargetBuildVersion=_minorTargetBuildVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)compatibilityVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)constructSoftwareUpdateMAAssetQuery;
-(id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)arg1 ;
-(void)selectSoftwareUpdateMajorPrimaryAsset:(id*)arg1 majorSecondaryAsset:(id*)arg2 minorPrimaryAsset:(id*)arg3 minorSecondaryAsset:(id*)arg4 fromAssetQuery:(id)arg5 ;
-(NSString *)majorTargetBuildVersion;
-(NSString *)minorTargetBuildVersion;
-(void)setMajorTargetBuildVersion:(NSString *)arg1 ;
-(void)setMinorTargetBuildVersion:(NSString *)arg1 ;
-(id)initWithAssetType:(id)arg1 majorTargetBuild:(id)arg2 minorTargetBuild:(id)arg3 usingPolicies:(long long)arg4 usingExtensions:(id)arg5 ;
@end

