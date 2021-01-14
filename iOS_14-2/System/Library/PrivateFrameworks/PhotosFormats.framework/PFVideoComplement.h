/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSString, NSDictionary;

@interface PFVideoComplement : NSObject {

	NSString* _imagePath;
	NSString* _videoPath;
	NSDictionary* _metadata;
	NSString* _originalPairingIdentifier;
	SCD_Struct_PF3 _originalImageDisplayTime;
	SCD_Struct_PF3 _originalVideoDuration;
	BOOL _didReadOriginalMetadata;

}

@property (nonatomic,copy,readonly) NSString * videoPath; 
@property (nonatomic,copy,readonly) NSString * imagePath; 
@property (nonatomic,copy,readonly) NSString * pairingIdentifier; 
@property (nonatomic,readonly) SCD_Struct_PF3 imageDisplayTime; 
@property (nonatomic,copy,readonly) NSString * originalPairingIdentifier; 
@property (nonatomic,readonly) SCD_Struct_PF3 originalImageDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PF3 originalVideoDuration; 
@property (nonatomic,copy,readonly) NSString * videoPath;                              //@synthesize videoPath=_videoPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * imagePath;                              //@synthesize imagePath=_imagePath - In the implementation block
+(id)currentFormatVersion;
-(NSString *)pairingIdentifier;
-(id)initWithPropertyList:(id)arg1 ;
-(id)propertyListRepresentation;
-(id)init;
-(NSString *)videoPath;
-(id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 imageDisplayTime:(SCD_Struct_PF3)arg3 pairingIdentifier:(id)arg4 ;
-(id)initWithBundleAtURL:(id)arg1 ;
-(SCD_Struct_PF3)originalVideoDuration;
-(NSString *)imagePath;
-(SCD_Struct_PF3)imageDisplayTime;
-(id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 ;
-(BOOL)writeToBundleAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)linkOrCopyPath:(id)arg1 toPath:(id)arg2 forceCopy:(BOOL)arg3 error:(id*)arg4 ;
-(NSString *)originalPairingIdentifier;
-(SCD_Struct_PF3)originalImageDisplayTime;
-(void)_readMetadataIfNeeded;
@end

