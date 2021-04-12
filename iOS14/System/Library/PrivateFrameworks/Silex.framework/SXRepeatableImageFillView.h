/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)load;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXRepeatableImageView *)imageView;
-(void)pause;
-(void)play;
-(SXClippingView *)clippingView;
-(void)layoutSubviews;
-(void)dealloc;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(CGSize)patternSize;
-(id)initWithRepeatableImageFill:(id)arg1 imageView:(id)arg2 ;
-(void)setPatternSize:(CGSize)arg1 ;
@end

