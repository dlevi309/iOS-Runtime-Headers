/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAMetalLayer;

@interface PKMetalView : UIView {

	BOOL _isWideGamut;
	BOOL _isFixedPixelSize;
	BOOL _doubleBuffered;
	CGSize _fixedPixelSize;

}

@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
@property (nonatomic,readonly) BOOL isWideGamut;                       //@synthesize isWideGamut=_isWideGamut - In the implementation block
@property (nonatomic,readonly) BOOL isFixedPixelSize;                  //@synthesize isFixedPixelSize=_isFixedPixelSize - In the implementation block
@property (nonatomic,readonly) CGSize fixedPixelSize;                  //@synthesize fixedPixelSize=_fixedPixelSize - In the implementation block
@property (assign,nonatomic) BOOL doubleBuffered;                      //@synthesize doubleBuffered=_doubleBuffered - In the implementation block
@property (nonatomic,readonly) BOOL isDrawableAvailable; 
@property (nonatomic,readonly) CGSize drawableSize; 
+(Class)layerClass;
-(BOOL)isDrawableAvailable;
-(CGSize)drawableSize;
-(CAMetalLayer *)metalLayer;
-(void)setFixedPixelSize:(CGSize)arg1 ;
-(void)resizeDrawableIfNecessary;
-(id)initWithFrame:(CGRect)arg1 andPixelSize:(CGSize)arg2 isWideGamut:(BOOL)arg3 ;
-(void)flushDrawables;
-(BOOL)doubleBuffered;
-(void)setDoubleBuffered:(BOOL)arg1 ;
-(BOOL)isFixedPixelSize;
-(void)initLayer;
-(CGSize)fixedPixelSize;
-(id)initWithFrame:(CGRect)arg1 isWideGamut:(BOOL)arg2 ;
-(BOOL)isWideGamut;
@end

