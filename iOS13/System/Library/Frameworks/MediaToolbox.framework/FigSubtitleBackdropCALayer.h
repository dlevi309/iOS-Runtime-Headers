/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleBackdropCALayer : FigBaseCALayer {

	OpaqueFigSubtitleBackdropCALayerInternal* bdLayerInternal;

}
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setNeedsLayout;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsDisplay;
-(BOOL)shouldEnableBackdropLayer;
-(void)updateBackdropLayer;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)updateWindowOpacity:(double)arg1 ;
-(void)updateHDRContentState:(BOOL)arg1 ;
@end

