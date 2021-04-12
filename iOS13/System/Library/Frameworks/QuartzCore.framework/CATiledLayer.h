/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(double)fadeDuration;
+(unsigned)prefetchedTiles;
+(BOOL)shouldDrawOnMainThread;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)_display;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)invalidateContents;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(void)_colorSpaceDidChange;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)_dealloc;
-(BOOL)_canDisplayConcurrently;
-(unsigned long long)levelsOfDetail;
-(void)setLevelsOfDetail:(unsigned long long)arg1 ;
-(unsigned long long)levelsOfDetailBias;
-(void)setLevelsOfDetailBias:(unsigned long long)arg1 ;
-(double)maximumTileScale;
-(BOOL)canDrawRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(BOOL)isDrawingEnabled;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)displayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)setMaximumTileScale:(double)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
@end

