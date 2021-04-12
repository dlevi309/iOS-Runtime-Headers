/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class AVAsset, AVAssetTrack, NSArray;

@interface PIVideoReframeMetadataExtractor : NSObject {

	AVAsset* _asset;
	AVAssetTrack* _videoTrack;
	AVAssetTrack* _mdataTrack;
	CGAffineTransform ndcMetadataTransform;
	CGAffineTransform pxlMetadataTransform;
	NSArray* timedMetadataArray;

}

@property (nonatomic,readonly) NSArray * timedMetadataArray; 
-(id)init;
-(id)initWithAVAsset:(id)arg1 ;
-(id)extractMetadata;
-(NSArray *)timedMetadataArray;
-(void)overwriteTrackingMetadataWithPlist:(id)arg1 ;
-(id)subjectsFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(CGVector)centerMotionVectorFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(CGVector)motionBlurVectorFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(SCD_Struct_PI9)trajectoryeHomographyFromMetadata:(const FigLivePhotoMetadata*)arg1 containsV3Metadata:(BOOL*)arg2 ;
@end

