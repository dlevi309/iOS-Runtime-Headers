/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class CIImage;

@interface PFLivePhotoFrameProcessingRequest : NSObject {

	CIImage* _image;
	long long _type;
	double _renderScale;
	SCD_Struct_PF3 _time;

}

@property (nonatomic,retain) CIImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF3 time;              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double renderScale;               //@synthesize renderScale=_renderScale - In the implementation block
-(SCD_Struct_PF3)time;
-(void)setTime:(SCD_Struct_PF3)arg1 ;
-(void)setImage:(CIImage *)arg1 ;
-(void)setRenderScale:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(CIImage *)image;
-(double)renderScale;
-(long long)type;
@end

