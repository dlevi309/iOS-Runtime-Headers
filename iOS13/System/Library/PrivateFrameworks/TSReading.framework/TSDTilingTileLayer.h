/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer {

	unsigned long long mIndex;
	BOOL mNeedsTileDisplay;
	NSRange mLocation;

}

@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) BOOL needsTileDisplay; 
@property (assign,nonatomic) NSRange location; 
-(unsigned long long)index;
-(NSRange)location;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setLocation:(NSRange)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)display;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setNeedsLayoutForTilingLayers;
-(void)updateFrameWithTileSize:(CGSize)arg1 tilesWide:(unsigned long long)arg2 tilesHigh:(unsigned long long)arg3 geometryProvider:(id)arg4 ;
-(void)setNeedsTileDisplay:(BOOL)arg1 ;
-(BOOL)needsTileDisplay;
-(void)setNeedsDisplayInRectIgnoringBackground:(CGRect)arg1 ;
-(id)tileContentsLayer;
@end

