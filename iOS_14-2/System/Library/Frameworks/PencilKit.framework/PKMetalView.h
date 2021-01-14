/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, CAMetalLayer;

@interface PKMetalView : UIView {

	CABackdropLayer* _backdropLayer;
	CAMetalLayer* _metalLayer;
	BOOL _isFixedPixelSize;
	BOOL _doubleBuffered;
	BOOL _useLuminanceColorFilter;
	unsigned long long _pixelFormat;
	CGSize _fixedPixelSize;

}

@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
@property (nonatomic,readonly) BOOL isFixedPixelSize;                       //@synthesize isFixedPixelSize=_isFixedPixelSize - In the implementation block
@property (nonatomic,readonly) CGSize fixedPixelSize;                       //@synthesize fixedPixelSize=_fixedPixelSize - In the implementation block
@property (assign,nonatomic) BOOL doubleBuffered;                           //@synthesize doubleBuffered=_doubleBuffered - In the implementation block
@property (nonatomic,readonly) BOOL isDrawableAvailable; 
@property (nonatomic,readonly) CGSize drawableSize; 
@property (assign,nonatomic) BOOL presentsWithTransaction; 
@property (assign,nonatomic) BOOL useLuminanceColorFilter;                  //@synthesize useLuminanceColorFilter=_useLuminanceColorFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
-(BOOL)isDrawableAvailable;
-(unsigned long long)pixelFormat;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(BOOL)presentsWithTransaction;
-(CGSize)drawableSize;
-(void)accessibilityInvertColorsStatusDidChange:(id)arg1 ;
-(void)setUseLuminanceColorFilter:(BOOL)arg1 ;
-(BOOL)useLuminanceColorFilter;
-(CAMetalLayer *)metalLayer;
-(void)setFixedPixelSize:(CGSize)arg1 ;
-(void)resizeDrawableIfNecessary;
-(id)initWithFrame:(CGRect)arg1 andPixelSize:(CGSize)arg2 pixelFormat:(unsigned long long)arg3 ;
-(void)flushDrawables;
-(BOOL)doubleBuffered;
-(void)setDoubleBuffered:(BOOL)arg1 ;
-(BOOL)isFixedPixelSize;
-(void)initLayer;
-(void)installLuminanceColorFilter;
-(CGImageRef)newLuminanceMap;
-(CGSize)fixedPixelSize;
-(id)initWithFrame:(CGRect)arg1 pixelFormat:(unsigned long long)arg2 ;
@end

