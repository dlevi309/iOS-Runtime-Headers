/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigCDSCALayer : FigBaseCALayer {

	OpaqueFigCDSCALayerInternal* layerInternal;

}
-(void)layoutSublayers;
-(id)init;
-(void)clear:(CGRect)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setVideoBounds:(CGRect)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setCallbacks:(id)arg1 userEvent:(/*function pointer*/void*)arg2 viewportChanged:(/*function pointer*/void*)arg3 drawInContext:(/*function pointer*/void*)arg4 ;
-(void)dealloc;
@end

