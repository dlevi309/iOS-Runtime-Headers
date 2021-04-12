/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject {

	NSMutableDictionary* _capabilitiesInformation;

}

@property (retain) NSMutableDictionary * capabilitiesInformation;              //@synthesize capabilitiesInformation=_capabilitiesInformation - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(void)gatherCapabilitiesWithOptions:(id)arg1 ;
-(void)addVersion;
-(void)addCodecInformation;
-(void)addHEVCCodecInformationToDictionary:(id)arg1 ;
-(void)addHEIFContainerInformationToDictionary:(id)arg1 ;
-(void)addVendorSpecificInformation;
-(void)addTranscodeChoiceWithOptions:(id)arg1 ;
-(void)addLivePhotoInformationToDictionary:(id)arg1 ;
-(void)addAssetBundleInformationToDictionary:(id)arg1 ;
-(NSMutableDictionary *)capabilitiesInformation;
-(void)setCapabilitiesInformation:(NSMutableDictionary *)arg1 ;
@end

