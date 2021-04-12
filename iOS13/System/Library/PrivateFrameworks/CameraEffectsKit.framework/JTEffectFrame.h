/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PCMatrix44Double;

@interface JTEffectFrame : NSObject {

	BOOL _isPosterFrame;
	double _rotation;
	PCMatrix44Double* _transform;
	PCMatrix44Double* _objectTransform;
	PCMatrix44Double* _clipTransform;
	CGPoint _center;
	CGSize _size;
	CGPoint _scale;
	CGSize _relativeToSize;
	CGPoint _midpoint;
	CGPoint _trackedMidpoint;
	CGPoint _imagePoints0;
	CGPoint _imagePoints1;
	CGPoint _imagePoints2;
	CGPoint _imagePoints3;
	CGPoint _trackedImagePoints0;
	CGPoint _trackedImagePoints1;
	CGPoint _trackedImagePoints2;
	CGPoint _trackedImagePoints3;
	SCD_Struct_JT6 _time;
	CGRect _bounds;

}

@property (assign,nonatomic) SCD_Struct_JT6 time;                             //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL isPosterFrame;                              //@synthesize isPosterFrame=_isPosterFrame - In the implementation block
@property (assign,nonatomic) CGPoint center;                                  //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint scale;                                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotation;                                 //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) CGSize relativeToSize;                           //@synthesize relativeToSize=_relativeToSize - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGPoint midpoint;                                //@synthesize midpoint=_midpoint - In the implementation block
@property (assign,nonatomic) CGPoint trackedMidpoint;                         //@synthesize trackedMidpoint=_trackedMidpoint - In the implementation block
@property (assign,nonatomic) CGPoint imagePoints0;                            //@synthesize imagePoints0=_imagePoints0 - In the implementation block
@property (assign,nonatomic) CGPoint imagePoints1;                            //@synthesize imagePoints1=_imagePoints1 - In the implementation block
@property (assign,nonatomic) CGPoint imagePoints2;                            //@synthesize imagePoints2=_imagePoints2 - In the implementation block
@property (assign,nonatomic) CGPoint imagePoints3;                            //@synthesize imagePoints3=_imagePoints3 - In the implementation block
@property (assign,nonatomic) CGPoint trackedImagePoints0;                     //@synthesize trackedImagePoints0=_trackedImagePoints0 - In the implementation block
@property (assign,nonatomic) CGPoint trackedImagePoints1;                     //@synthesize trackedImagePoints1=_trackedImagePoints1 - In the implementation block
@property (assign,nonatomic) CGPoint trackedImagePoints2;                     //@synthesize trackedImagePoints2=_trackedImagePoints2 - In the implementation block
@property (assign,nonatomic) CGPoint trackedImagePoints3;                     //@synthesize trackedImagePoints3=_trackedImagePoints3 - In the implementation block
@property (nonatomic,retain) PCMatrix44Double * transform;                    //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) PCMatrix44Double * objectTransform;              //@synthesize objectTransform=_objectTransform - In the implementation block
@property (nonatomic,retain) PCMatrix44Double * clipTransform;                //@synthesize clipTransform=_clipTransform - In the implementation block
-(id)init;
-(id)description;
-(CGSize)size;
-(PCMatrix44Double *)transform;
-(CGPoint)scale;
-(SCD_Struct_JT6)time;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setScale:(CGPoint)arg1 ;
-(void)setTime:(SCD_Struct_JT6)arg1 ;
-(void)setTransform:(PCMatrix44Double *)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(CGPoint)midpoint;
-(CGSize)relativeToSize;
-(void)setIsPosterFrame:(BOOL)arg1 ;
-(void)setRelativeToSize:(CGSize)arg1 ;
-(void)setMidpoint:(CGPoint)arg1 ;
-(void)setTrackedMidpoint:(CGPoint)arg1 ;
-(void)setImagePoints0:(CGPoint)arg1 ;
-(void)setImagePoints1:(CGPoint)arg1 ;
-(void)setImagePoints2:(CGPoint)arg1 ;
-(void)setImagePoints3:(CGPoint)arg1 ;
-(void)setTrackedImagePoints0:(CGPoint)arg1 ;
-(void)setTrackedImagePoints1:(CGPoint)arg1 ;
-(void)setTrackedImagePoints2:(CGPoint)arg1 ;
-(void)setTrackedImagePoints3:(CGPoint)arg1 ;
-(void)setObjectTransform:(PCMatrix44Double *)arg1 ;
-(void)setClipTransform:(PCMatrix44Double *)arg1 ;
-(BOOL)isPosterFrame;
-(CGPoint)trackedMidpoint;
-(CGPoint)imagePoints0;
-(CGPoint)imagePoints1;
-(CGPoint)imagePoints2;
-(CGPoint)imagePoints3;
-(CGPoint)trackedImagePoints0;
-(CGPoint)trackedImagePoints1;
-(CGPoint)trackedImagePoints2;
-(CGPoint)trackedImagePoints3;
-(PCMatrix44Double *)objectTransform;
-(PCMatrix44Double *)clipTransform;
@end

