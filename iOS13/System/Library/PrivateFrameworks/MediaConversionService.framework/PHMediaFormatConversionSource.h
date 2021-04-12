/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/MediaConversionService-Structs.h>
#import <MediaConversionService/PHMediaFormatConversionContent.h>

@class NSString;

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent {

	BOOL _preflighted;
	BOOL _containsHEVCVideo;
	BOOL _containsHEIFImage;
	BOOL _didCheckForLivePhotoPairingIdentifier;
	NSString* _renderOriginatingSignature;
	NSString* _livePhotoPairingIdentifier;
	long long _locationMetadataStatus;
	id _hevcTrackFormatDescription;
	CGSize _imageDimensions;

}

@property (assign) CGSize imageDimensions;                                       //@synthesize imageDimensions=_imageDimensions - In the implementation block
@property (assign) BOOL preflighted;                                             //@synthesize preflighted=_preflighted - In the implementation block
@property (assign) BOOL containsHEVCVideo;                                       //@synthesize containsHEVCVideo=_containsHEVCVideo - In the implementation block
@property (assign) BOOL containsHEIFImage;                                       //@synthesize containsHEIFImage=_containsHEIFImage - In the implementation block
@property (nonatomic,retain) NSString * livePhotoPairingIdentifier;              //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (assign) BOOL didCheckForLivePhotoPairingIdentifier;                   //@synthesize didCheckForLivePhotoPairingIdentifier=_didCheckForLivePhotoPairingIdentifier - In the implementation block
@property (assign) long long locationMetadataStatus;                             //@synthesize locationMetadataStatus=_locationMetadataStatus - In the implementation block
@property (retain) id hevcTrackFormatDescription;                                //@synthesize hevcTrackFormatDescription=_hevcTrackFormatDescription - In the implementation block
@property (copy) NSString * renderOriginatingSignature;                          //@synthesize renderOriginatingSignature=_renderOriginatingSignature - In the implementation block
+(Class)requestClass;
+(id)imageSourceForFileURL:(id)arg1 dimensions:(CGSize)arg2 ;
+(id)videoSourceForFileURL:(id)arg1 ;
+(id)imageSourceForFileURL:(id)arg1 ;
+(id)sourceForFileURL:(id)arg1 mediaType:(long long)arg2 imageDimensions:(CGSize)arg3 ;
+(id)sourceForFileURL:(id)arg1 ;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(void)setRenderOriginatingSignature:(NSString *)arg1 ;
-(void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)arg1 ;
-(void)setLivePhotoPairingIdentifier:(NSString *)arg1 ;
-(NSString *)livePhotoPairingIdentifier;
-(BOOL)determineMediaTypeFromPathExtensionWithError:(id*)arg1 ;
-(void)checkForHEVCVideo;
-(void)checkForHEIFImage;
-(BOOL)preflightWithError:(id*)arg1 ;
-(void)checkForLivePhotoPairingIdentifier;
-(void)checkForLocationData;
-(long long)imageSourceLocationMetadataStatus;
-(long long)videoSourceLocationMetadataStatus;
-(void)markLocationMetadataAsCheckedWithStatus:(long long)arg1 ;
-(NSString *)renderOriginatingSignature;
-(BOOL)preflighted;
-(void)setPreflighted:(BOOL)arg1 ;
-(BOOL)containsHEVCVideo;
-(void)setContainsHEVCVideo:(BOOL)arg1 ;
-(BOOL)containsHEIFImage;
-(void)setContainsHEIFImage:(BOOL)arg1 ;
-(BOOL)didCheckForLivePhotoPairingIdentifier;
-(void)setDidCheckForLivePhotoPairingIdentifier:(BOOL)arg1 ;
-(long long)locationMetadataStatus;
-(void)setLocationMetadataStatus:(long long)arg1 ;
-(id)hevcTrackFormatDescription;
-(void)setHevcTrackFormatDescription:(id)arg1 ;
@end

