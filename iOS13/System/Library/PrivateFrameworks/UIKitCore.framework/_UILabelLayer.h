/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

@interface _UILabelLayer : CALayer {

	_UILabelContentLayer* _contentLayer;
	BOOL _contentInsetsValid;
	UIEdgeInsets _contentInsets;

}
-(void)setBounds:(CGRect)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setMasksToBounds:(BOOL)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)setContentsGravity:(id)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
-(void)layoutSublayers;
-(id)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(BOOL)arg1 ;
-(void)invalidateContentInsets;
-(void)_clearContents;
-(void)_updateContentLayer;
-(void)updateContentInsets;
-(void)updateContentLayerSize;
-(void)_setFrameOrBounds:(CGRect)arg1 settingAction:(/*^block*/id)arg2 ;
@end

