/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFUIWindowDraggingPasteboard;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class UIImageView, UIImage;

@interface OFUIWindowDraggingItem : NSObject {

	id<OFUIWindowDraggingPasteboard> _object;
	UIImageView* _imageView;
	UIImage* _originalImage;
	UIImage* _placeHolderImage;
	CGRect _originalBounds;
	double _imageAspectRatio;
	CGRect _imageContentsRect;
	CGAffineTransform _originalTransform;
	BOOL _isReverting;
	double _rotation;

}

@property (nonatomic,retain) id<OFUIWindowDraggingPasteboard> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double rotation;                                      //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                              //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage * placeHolderImage;                           //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (assign,nonatomic) CGRect originalBounds;                                //@synthesize originalBounds=_originalBounds - In the implementation block
@property (assign,nonatomic) double imageAspectRatio;                              //@synthesize imageAspectRatio=_imageAspectRatio - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                             //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (assign,nonatomic) CGAffineTransform originalTransform;                  //@synthesize originalTransform=_originalTransform - In the implementation block
@property (assign,nonatomic) BOOL isReverting;                                     //@synthesize isReverting=_isReverting - In the implementation block
-(id)init;
-(void)dealloc;
-(id<OFUIWindowDraggingPasteboard>)object;
-(void)setObject:(id<OFUIWindowDraggingPasteboard>)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)placeHolderImage;
-(void)setPlaceHolderImage:(UIImage *)arg1 ;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(CGRect)imageContentsRect;
-(BOOL)isReverting;
-(double)imageAspectRatio;
-(id)initWithObject:(id)arg1 image:(id)arg2 ;
-(CGRect)originalBounds;
-(void)setOriginalBounds:(CGRect)arg1 ;
-(void)setImageAspectRatio:(double)arg1 ;
-(CGAffineTransform)originalTransform;
-(void)setOriginalTransform:(CGAffineTransform)arg1 ;
-(void)setIsReverting:(BOOL)arg1 ;
@end

