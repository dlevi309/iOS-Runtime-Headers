/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject {

	NSMutableDictionary* _capabilitiesInformation;

}

@property (retain) NSMutableDictionary * capabilitiesInformation;              //@synthesize capabilitiesInformation=_capabilitiesInformation - In the implementation block
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(id)dictionaryRepresentation;
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

