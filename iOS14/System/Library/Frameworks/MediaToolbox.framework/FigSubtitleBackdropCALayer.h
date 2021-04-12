/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleBackdropCALayer : FigBaseCALayer {

	OpaqueFigSubtitleBackdropCALayerInternal* bdLayerInternal;

}
-(id)init;
-(void)setNeedsDisplay;
-(void)setBounds:(CGRect)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)shouldEnableBackdropLayer;
-(void)updateBackdropLayer;
-(void)updateWindowOpacity:(double)arg1 ;
-(void)updateHDRContentState:(BOOL)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)setContents:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
@end

