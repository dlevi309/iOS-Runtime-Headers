/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer

@property (assign) CGColorRef fillColor; 
@property (assign) double maximumTileScale; 
@property (getter=isDrawingEnabled) BOOL drawingEnabled; 
@property (__weak) id<CATiledLayerDelegate><CALayerDelegate> delegate; 
@property (assign) unsigned long long levelsOfDetail; 
@property (assign) unsigned long long levelsOfDetailBias; 
@property (assign) CGSize tileSize; 
+(double)fadeDuration;
+(unsigned)prefetchedTiles;
+(BOOL)shouldDrawOnMainThread;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)_colorSpaceDidChange;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGSize)tileSize;
-(CGColorRef)fillColor;
-(void)setTileSize:(CGSize)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_display;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)setUnsafeUnretainedDelegate:(id)arg1 ;
-(BOOL)_canDisplayConcurrently;
-(unsigned long long)levelsOfDetail;
-(void)setLevelsOfDetail:(unsigned long long)arg1 ;
-(unsigned long long)levelsOfDetailBias;
-(void)setLevelsOfDetailBias:(unsigned long long)arg1 ;
-(double)maximumTileScale;
-(BOOL)canDrawRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(BOOL)isDrawingEnabled;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)setMaximumTileScale:(double)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)displayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)_dealloc;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)dealloc;
@end

