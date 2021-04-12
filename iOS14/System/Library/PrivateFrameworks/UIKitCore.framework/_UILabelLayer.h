/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMasksToBounds:(BOOL)arg1 ;
-(void)_setLabelMasksToBoundsForAnimation:(BOOL)arg1 ;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(void)layoutSublayers;
-(void)setContentsScale:(double)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)invalidateContentInsets;
-(void)setFrame:(CGRect)arg1 ;
-(void)updateContentInsets;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)_clearContents;
-(void)_updateContentLayer;
-(void)setContentsGravity:(id)arg1 ;
-(id)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)setContentsFormat:(id)arg1 ;
@end

