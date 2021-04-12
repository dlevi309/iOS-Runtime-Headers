/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXSceneComponentAnimationHandler.h>

@class SXContainerComponentView;

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler {

	SXContainerComponentView* _headerComponent;
	unsigned long long _attachmentType;

}

@property (assign,nonatomic,__weak) SXContainerComponentView * headerComponent;              //@synthesize headerComponent=_headerComponent - In the implementation block
@property (assign,nonatomic) unsigned long long attachmentType;                              //@synthesize attachmentType=_attachmentType - In the implementation block
-(void)setAttachmentType:(unsigned long long)arg1 ;
-(unsigned long long)attachmentType;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
-(void)setHeaderComponent:(SXContainerComponentView *)arg1 ;
-(void)ensureScalabilityOfHeaderComponentFill;
-(SXContainerComponentView *)headerComponent;
-(CGRect)fillContentFrameForScale:(double)arg1 andTranslation:(double)arg2 ;
@end

