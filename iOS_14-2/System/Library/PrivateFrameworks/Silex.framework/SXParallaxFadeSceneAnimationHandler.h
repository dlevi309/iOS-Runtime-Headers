/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXSceneComponentAnimationHandler.h>

@class UIView, SXComponentView;

@interface SXParallaxFadeSceneAnimationHandler : SXSceneComponentAnimationHandler {

	UIView* _overlayView;
	SXComponentView* _headerComponentView;
	double _scrollDistance;
	double _alphaDistance;
	unsigned long long _attachmentType;

}

@property (nonatomic,retain) UIView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) SXComponentView * headerComponentView;              //@synthesize headerComponentView=_headerComponentView - In the implementation block
@property (assign,nonatomic) double scrollDistance;                              //@synthesize scrollDistance=_scrollDistance - In the implementation block
@property (assign,nonatomic) double alphaDistance;                               //@synthesize alphaDistance=_alphaDistance - In the implementation block
@property (assign,nonatomic) unsigned long long attachmentType;                  //@synthesize attachmentType=_attachmentType - In the implementation block
-(void)startAnimation;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setAttachmentType:(unsigned long long)arg1 ;
-(unsigned long long)attachmentType;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)finishAnimation;
-(id)componentViewToAnimate;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
-(void)setHeaderComponentView:(SXComponentView *)arg1 ;
-(SXComponentView *)headerComponentView;
-(void)setScrollDistance:(double)arg1 ;
-(void)setAlphaDistance:(double)arg1 ;
-(double)scrollDistance;
-(double)alphaDistance;
@end

