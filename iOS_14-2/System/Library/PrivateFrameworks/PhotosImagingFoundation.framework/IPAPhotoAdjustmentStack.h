/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)maskUUIDs;
-(PFIntSize_st)inputSize;
-(IPAPhotoAdjustmentPipeline *)pipeline;
-(long long)orientation;
-(void)setInputSize:(PFIntSize_st)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setPipeline:(IPAPhotoAdjustmentPipeline *)arg1 ;
-(id)minimumVersionForFormat:(id)arg1 ;
-(id)_debugDescriptionSuffix;
@end

