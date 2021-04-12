/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXPrivacyPreservingLocationHash : NSObject
+(long long)privacyPreservingGeohashForLocation:(id)arg1 locationEnabled:(BOOL)arg2 ;
+(long long)privacyPreservingCoarseGeohashForLocation:(id)arg1 locationEnabled:(BOOL)arg2 ;
+(long long)privacyPreservingZoom7GeohashForLocation:(id)arg1 locationEnabled:(BOOL)arg2 ;
+(long long)privacyPreservingGeohashForLocation:(id)arg1 locationHashLevel:(int)arg2 locationEnabled:(BOOL)arg3 ;
+(long long)geohashCollidesWithKnownLocationTypeForGeohash:(long long)arg1 ;
+(long long)preservePrivacyForGeoHash:(long long)arg1 ;
+(id)readDeviceSpecificSalt;
+(id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2 ;
+(id)randomData;
+(long long)sha256HashForGeohash:(long long)arg1 salt:(id)arg2 ;
+(long long)dropLastTenBitsOfSHA256Hash:(long long)arg1 ;
@end

