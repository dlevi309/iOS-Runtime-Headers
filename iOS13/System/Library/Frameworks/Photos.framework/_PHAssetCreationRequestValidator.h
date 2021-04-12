/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHValidator.h>

@class PHAssetCreationRequest, NSString;

@interface _PHAssetCreationRequestValidator : PHValidator {

	PHAssetCreationRequest* _assetCreationRequest;
	NSString* _validatedPairingIdentifier;
	SCD_Struct_PH9 _validatedVideoDuration;
	SCD_Struct_PH9 _validatedImageDisplayTime;

}

@property (nonatomic,__weak,readonly) PHAssetCreationRequest * assetCreationRequest;              //@synthesize assetCreationRequest=_assetCreationRequest - In the implementation block
@property (nonatomic,readonly) NSString * validatedPairingIdentifier;                             //@synthesize validatedPairingIdentifier=_validatedPairingIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH9 validatedVideoDuration;                             //@synthesize validatedVideoDuration=_validatedVideoDuration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH9 validatedImageDisplayTime;                          //@synthesize validatedImageDisplayTime=_validatedImageDisplayTime - In the implementation block
-(id)initWithAssetCreationRequest:(id)arg1 ;
-(void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(SCD_Struct_PH9*)arg3 imageDisplayTime:(SCD_Struct_PH9*)arg4 ;
-(PHAssetCreationRequest *)assetCreationRequest;
-(NSString *)validatedPairingIdentifier;
-(SCD_Struct_PH9)validatedVideoDuration;
-(SCD_Struct_PH9)validatedImageDisplayTime;
@end

