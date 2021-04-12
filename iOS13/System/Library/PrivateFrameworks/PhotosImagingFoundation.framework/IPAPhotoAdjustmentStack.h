/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAAdjustmentStack.h>

@class IPAPhotoAdjustmentPipeline;

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack {

	long long _orientation;
	IPAPhotoAdjustmentPipeline* _pipeline;
	PFIntSize_st _inputSize;

}

@property (assign,nonatomic) PFIntSize_st inputSize;                             //@synthesize inputSize=_inputSize - In the implementation block
@property (assign,nonatomic) long long orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) IPAPhotoAdjustmentPipeline * pipeline;              //@synthesize pipeline=_pipeline - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(PFIntSize_st)inputSize;
-(void)setInputSize:(PFIntSize_st)arg1 ;
-(IPAPhotoAdjustmentPipeline *)pipeline;
-(id)maskUUIDs;
-(id)minimumVersionForFormat:(id)arg1 ;
-(id)_debugDescriptionSuffix;
-(void)setPipeline:(IPAPhotoAdjustmentPipeline *)arg1 ;
@end

