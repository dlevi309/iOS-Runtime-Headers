/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class CIImage;

@interface ISFrameProcessingRequest : NSObject {

	CIImage* _image;
	long long _type;
	double _renderScale;
	SCD_Struct_IS1 _time;

}

@property (nonatomic,retain) CIImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS1 time;              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double renderScale;               //@synthesize renderScale=_renderScale - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(SCD_Struct_IS1)time;
-(CIImage *)image;
-(void)setImage:(CIImage *)arg1 ;
-(void)setTime:(SCD_Struct_IS1)arg1 ;
-(double)renderScale;
-(void)setRenderScale:(double)arg1 ;
@end

