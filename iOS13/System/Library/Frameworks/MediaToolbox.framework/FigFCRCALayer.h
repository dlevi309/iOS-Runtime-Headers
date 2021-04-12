/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigFCRCALayer : FigBaseCALayer {

	OpaqueFigCaptionRendererCALayerInternal* layerInternal;

}
-(id)init;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)clear:(CGRect)arg1 ;
-(void)layoutSublayers;
-(void)setVideoBounds:(CGRect)arg1 ;
-(void)setCallbacks:(id)arg1 userEvent:(/*function pointer*/void*)arg2 viewportChanged:(/*function pointer*/void*)arg3 drawInContext:(/*function pointer*/void*)arg4 ;
-(void)compose;
@end

