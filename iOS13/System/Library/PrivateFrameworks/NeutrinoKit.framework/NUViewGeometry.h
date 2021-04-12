/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/


#import <NeutrinoKit/NeutrinoKit-Structs.h>
@interface NUViewGeometry : NSObject {

	BOOL _flipped;
	double _backingScale;
	double _angle;
	double _maximumScale;
	CGSize _imageSize;
	CGPoint _origin;
	UIEdgeInsets _contentInsets;
	CGRect _cropRect;

}

@property (assign,nonatomic) double backingScale;                        //@synthesize backingScale=_backingScale - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                           //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) CGSize viewImageSize; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,getter=isFlipped,nonatomic) BOOL flipped;              //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) double angle;                               //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                            //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) CGPoint origin;                             //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) double maximumScale;                        //@synthesize maximumScale=_maximumScale - In the implementation block
@property (nonatomic,readonly) CGRect imageBounds; 
@property (nonatomic,readonly) CGRect boundingCropRect; 
-(id)init;
-(void)setFlipped:(BOOL)arg1 ;
-(CGPoint)origin;
-(BOOL)isFlipped;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(CGRect)imageBounds;
-(UIEdgeInsets)contentInsets;
-(CGSize)imageSize;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(double)maximumScale;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(double)backingScale;
-(void)setBackingScale:(double)arg1 ;
-(CGSize)viewImageSize;
-(CGRect)proposedBoundsForBounds:(CGRect)arg1 inFrame:(CGRect)arg2 ;
-(CGRect)insetBoundsForCrop:(CGRect)arg1 inBounds:(CGRect)arg2 inFrame:(CGRect)arg3 ;
-(UIEdgeInsets)contentInsetsWithScale:(double)arg1 ;
-(CGRect)boundingCropRect;
-(void)setMaximumScale:(double)arg1 ;
@end

