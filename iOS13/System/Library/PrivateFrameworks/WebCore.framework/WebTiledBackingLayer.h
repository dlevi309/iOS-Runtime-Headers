/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >* _tileController;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isOpaque;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setBorderWidth:(double)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(double)contentsScale;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(BOOL)drawsAsynchronously;
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(void)setWantsDeepColorBackingStore:(BOOL)arg1 ;
-(void)setSupportsSubpixelAntialiasedText:(BOOL)arg1 ;
-(TiledBacking*)tiledBacking;
-(BOOL)wantsDeepColorBackingStore;
-(BOOL)supportsSubpixelAntialiasedText;
@end

