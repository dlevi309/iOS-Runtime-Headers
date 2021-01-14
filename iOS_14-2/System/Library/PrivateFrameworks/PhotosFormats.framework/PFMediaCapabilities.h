/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSDictionary;

@interface PFMediaCapabilities : NSObject {

	NSDictionary* _capabilitiesInformation;

}

@property (retain) NSDictionary * capabilitiesInformation;              //@synthesize capabilitiesInformation=_capabilitiesInformation - In the implementation block
+(unsigned)currentDeviceHEVCCapabilities;
+(id)legacyCapabilities;
+(id)capabilitiesForCurrentDevice;
+(BOOL)setNewFormatsConfiguration:(long long)arg1 fromSource:(long long)arg2 ;
+(BOOL)currentDeviceIsEligibleForHDRPlayback;
+(id)stringForSupport:(long long)arg1 ;
+(id)capabilitiesForCurrentDeviceWithOptions:(id)arg1 ;
+(id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg1 ;
+(id)testCapabilitiesNotSupportingHEVC;
+(id)testCapabilitiesNotSupportingHEIF;
+(void)setRecordSlomoConfiguration:(id)arg1 ;
+(void)setRecordVideoConfiguration:(id)arg1 ;
+(long long)newFormatsConfiguration;
+(id)recordVideoConfigurationWithValidValues:(id)arg1 ;
+(id)recordSlomoConfigurationWithValidValues:(id)arg1 ;
-(id)description;
-(long long)supportForAdjustmentBaseResources;
-(BOOL)supportsTranscodeChoice;
-(NSDictionary *)capabilitiesInformation;
-(void)setCapabilitiesInformation:(NSDictionary *)arg1 ;
-(id)initWithOpaqueRepresentation:(id)arg1 ;
-(long long)supportForCodec:(unsigned)arg1 ;
-(long long)supportForContainerTypeIdentifier:(id)arg1 ;
-(long long)supportForLivePhotoVersion:(id)arg1 ;
-(long long)supportForAssetBundleVersion:(id)arg1 ;
-(long long)hevcDecodingSupportForFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(long long)hevcDecodingSupportForAVAsset:(id)arg1 ;
-(id)opaqueRepresentation;
-(long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2 ;
-(long long)userDefaultsPeerOverrideValue;
-(long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)arg1 selector:(SEL)arg2 ;
-(long long)userDefaultsPeerAssetBundleSupportOverrideValue;
@end

