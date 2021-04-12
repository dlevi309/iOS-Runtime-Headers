/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)canProvideMetadataForAVAsset:(id)arg1 ;
-(id)init;
-(id)extractMetadata;
-(NSArray *)timedMetadataArray;
-(id)initWithAVAsset:(id)arg1 ;
-(void)overwriteTrackingMetadataWithPlist:(id)arg1 ;
-(id)subjectsFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(CGVector)centerMotionVectorFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(CGVector)motionBlurVectorFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(SCD_Struct_PI9)trajectoryeHomographyFromMetadata:(const FigLivePhotoMetadata*)arg1 containsV3Metadata:(BOOL*)arg2 ;
@end

