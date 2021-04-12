/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSArray, PHAssetCreationRequest, PHExternalAssetResource;

@interface PHAssetResourceBag : NSObject {

	NSArray* _assetResourceContexts;
	BOOL _didValidateForInsertion;
	BOOL _valid;
	BOOL _hasAdjustments;
	BOOL _hasRAW;
	BOOL _hasSpatialOverCapture;
	PHAssetCreationRequest* _assetCreationRequest;
	NSArray* _assetResources;
	long long _mediaType;
	unsigned long long _mediaSubtype;
	PHExternalAssetResource* _primaryResource;

}

@property (nonatomic,__weak,readonly) PHAssetCreationRequest * assetCreationRequest;              //@synthesize assetCreationRequest=_assetCreationRequest - In the implementation block
@property (nonatomic,readonly) NSArray * assetResources;                                          //@synthesize assetResources=_assetResources - In the implementation block
@property (nonatomic,readonly) BOOL didValidateForInsertion;                                      //@synthesize didValidateForInsertion=_didValidateForInsertion - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                         //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) BOOL hasAdjustments;                                               //@synthesize hasAdjustments=_hasAdjustments - In the implementation block
@property (nonatomic,readonly) BOOL hasRAW;                                                       //@synthesize hasRAW=_hasRAW - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialOverCapture;                                        //@synthesize hasSpatialOverCapture=_hasSpatialOverCapture - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtype;                                   //@synthesize mediaSubtype=_mediaSubtype - In the implementation block
@property (nonatomic,readonly) PHExternalAssetResource * primaryResource;                         //@synthesize primaryResource=_primaryResource - In the implementation block
+(id)_primaryAssetResource:(id)arg1 ;
+(BOOL)_supportsAssetResourceTypes:(id)arg1 mediaType:(long long*)arg2 mediaSubtype:(unsigned long long*)arg3 importedBy:(short)arg4 ;
+(BOOL)supportsAssetResourceTypes:(id)arg1 mediaType:(long long*)arg2 importedBy:(short)arg3 ;
-(BOOL)isValid;
-(long long)mediaType;
-(BOOL)hasAdjustments;
-(PHAssetCreationRequest *)assetCreationRequest;
-(id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2 ;
-(id)assetResourceWithType:(long long)arg1 ;
-(BOOL)_extractValidatedImageURL:(id*)arg1 imageData:(id*)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id*)arg5 ;
-(BOOL)_extractValidatedVideoURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_extractValidatedAudioURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_extractValidatedAdjustmentsURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)_validatedContextForResource:(id)arg1 ;
-(id)validatedURLForAssetResource:(id)arg1 ;
-(id)validatedDataForAssetResource:(id)arg1 ;
-(NSArray *)assetResources;
-(BOOL)didValidateForInsertion;
-(BOOL)hasRAW;
-(BOOL)hasSpatialOverCapture;
-(unsigned long long)mediaSubtype;
-(PHExternalAssetResource *)primaryResource;
@end

