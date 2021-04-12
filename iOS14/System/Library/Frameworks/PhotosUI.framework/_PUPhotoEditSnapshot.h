/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PHAdjustmentData, NSData;

@interface _PUPhotoEditSnapshot : NSObject {

	long long _workImageVersion;
	PHAdjustmentData* _adjustmentData;
	NSData* _imageData;
	NSData* _baseImageData;

}

@property (assign,nonatomic) long long workImageVersion;                     //@synthesize workImageVersion=_workImageVersion - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * adjustmentData;              //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (nonatomic,retain) NSData * imageData;                             //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSData * baseImageData;                         //@synthesize baseImageData=_baseImageData - In the implementation block
-(void)setBaseImageData:(NSData *)arg1 ;
-(void)setWorkImageVersion:(long long)arg1 ;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(PHAdjustmentData *)adjustmentData;
-(NSData *)imageData;
-(long long)workImageVersion;
-(id)_copyData:(id)arg1 ;
-(NSData *)baseImageData;
-(void)setImageData:(NSData *)arg1 ;
@end

