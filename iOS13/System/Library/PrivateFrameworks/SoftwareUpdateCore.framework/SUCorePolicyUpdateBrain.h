/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)compatibilityVersion;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
-(id)summary;
-(id)constructSoftwareUpdateMAAssetQuery;
-(void)selectSoftwareUpdatePrimaryAsset:(id*)arg1 secondaryAsset:(id*)arg2 fromAssetQuery:(id)arg3 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg1 documentationAssetType:(id)arg2 usingExtensions:(id)arg3 ;
@end

