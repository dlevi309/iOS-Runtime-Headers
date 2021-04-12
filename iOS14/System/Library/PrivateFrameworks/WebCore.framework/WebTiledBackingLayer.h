/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >* _tileController;

}
-(void)setOpaque:(BOOL)arg1 ;
-(double)contentsScale;
-(BOOL)isOpaque;
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(void)setWantsDeepColorBackingStore:(BOOL)arg1 ;
-(TiledBacking*)tiledBacking;
-(void)setSupportsSubpixelAntialiasedText:(BOOL)arg1 ;
-(BOOL)wantsDeepColorBackingStore;
-(BOOL)supportsSubpixelAntialiasedText;
-(id)init;
-(void)setNeedsDisplay;
-(void)setContentsScale:(double)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(BOOL)drawsAsynchronously;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)invalidate;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)dealloc;
-(void)setBorderWidth:(double)arg1 ;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
@end

