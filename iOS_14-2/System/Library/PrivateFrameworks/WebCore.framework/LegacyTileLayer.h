/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface LegacyTileLayer : CALayer {

	LegacyTileGrid* _tileGrid;
	unsigned _paintCount;
	BOOL _isRenderingInContext;

}

@property (assign,nonatomic) unsigned paintCount;                      //@synthesize paintCount=_paintCount - In the implementation block
@property (assign,nonatomic) LegacyTileGrid* tileGrid;                 //@synthesize tileGrid=_tileGrid - In the implementation block
@property (nonatomic,readonly) BOOL isRenderingInContext;              //@synthesize isRenderingInContext=_isRenderingInContext - In the implementation block
-(void)layoutSublayers;
-(unsigned)paintCount;
-(BOOL)isRenderingInContext;
-(void)setPaintCount:(unsigned)arg1 ;
-(void)setTileGrid:(LegacyTileGrid*)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(LegacyTileGrid*)tileGrid;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

