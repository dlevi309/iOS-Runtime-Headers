/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>

@class SXRepeatableImageView, SXClippingView, SXRepeatableImageFill;

@interface SXRepeatableImageFillView : SXFillView {

	SXRepeatableImageView* _imageView;
	SXClippingView* _clippingView;
	CGSize _patternSize;

}

@property (nonatomic,readonly) SXRepeatableImageFill * fill; 
@property (nonatomic,readonly) SXRepeatableImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) SXClippingView * clippingView;                  //@synthesize clippingView=_clippingView - In the implementation block
@property (assign,nonatomic) CGSize patternSize;                               //@synthesize patternSize=_patternSize - In the implementation block
-(void)dealloc;
-(void)load;
-(void)pause;
-(CGRect)contentFrame;
-(void)play;
-(void)layoutSubviews;
-(SXRepeatableImageView *)imageView;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXClippingView *)clippingView;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(CGSize)patternSize;
-(id)initWithRepeatableImageFill:(id)arg1 imageView:(id)arg2 ;
-(void)setPatternSize:(CGSize)arg1 ;
@end

