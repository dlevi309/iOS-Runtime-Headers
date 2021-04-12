/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicy.h>

@class NSNumber;

@interface SUCorePolicyUpdateBrain : SUCorePolicy {

	NSNumber* _compatibilityVersion;

}

@property (nonatomic,retain) NSNumber * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
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
-(void)selectSoftwareUpdatePrimaryAsset:(id*)arg1 secondaryAsset:(id*)arg2 fromAssetQuery:(id)arg3 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg1 documentationAssetType:(id)arg2 usingPolicies:(long long)arg3 usingExtensions:(id)arg4 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg1 documentationAssetType:(id)arg2 usingExtensions:(id)arg3 ;
@end

