/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDDatabaseZoneManagerConfiguration : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _zoneOwner;
	BOOL _shouldCreateZone;
	NSSet* _externalRecordTypesForSubscriptions;
	HMDHomeKitVersion* _minimumHomeKitVersion;
	NSSet* _requiredSupportedFeatures;
	HMBCloudZoneConfiguration* _cloudZoneConfiguration;

}

@property (getter=isZoneOwner) BOOL zoneOwner;                                    //@synthesize zoneOwner=_zoneOwner - In the implementation block
@property (assign) BOOL shouldCreateZone;                                         //@synthesize shouldCreateZone=_shouldCreateZone - In the implementation block
@property (copy) NSSet * externalRecordTypesForSubscriptions;                     //@synthesize externalRecordTypesForSubscriptions=_externalRecordTypesForSubscriptions - In the implementation block
@property (copy) HMDHomeKitVersion * minimumHomeKitVersion;                       //@synthesize minimumHomeKitVersion=_minimumHomeKitVersion - In the implementation block
@property (copy) NSSet * requiredSupportedFeatures;                               //@synthesize requiredSupportedFeatures=_requiredSupportedFeatures - In the implementation block
@property (copy) HMBCloudZoneConfiguration * cloudZoneConfiguration;              //@synthesize cloudZoneConfiguration=_cloudZoneConfiguration - In the implementation block
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setZoneOwner:(BOOL)arg1 ;
-(void)setMinimumHomeKitVersion:(HMDHomeKitVersion *)arg1 ;
-(void)setRequiredSupportedFeatures:(NSSet *)arg1 ;
-(BOOL)shouldCreateZone;
-(BOOL)isZoneOwner;
-(NSSet *)externalRecordTypesForSubscriptions;
-(HMDHomeKitVersion *)minimumHomeKitVersion;
-(NSSet *)requiredSupportedFeatures;
-(HMBCloudZoneConfiguration *)cloudZoneConfiguration;
-(void)setShouldCreateZone:(BOOL)arg1 ;
-(void)setExternalRecordTypesForSubscriptions:(NSSet *)arg1 ;
-(void)setCloudZoneConfiguration:(HMBCloudZoneConfiguration *)arg1 ;
@end

