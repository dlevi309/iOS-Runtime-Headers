/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol HKGraphTileDrawingDelegate;
@class CALayer, NSString;

@interface HKGraphTile : NSObject <CALayerDelegate> {

	BOOL _tileDisplayedSinceSetNeedsDisplay;
	id<HKGraphTileDrawingDelegate> _drawingDelegate;
	CALayer* _caLayer;
	long long _column;

}

@property (nonatomic,retain) CALayer * caLayer;                                                  //@synthesize caLayer=_caLayer - In the implementation block
@property (assign,nonatomic) long long column;                                                   //@synthesize column=_column - In the implementation block
@property (assign,nonatomic,__weak) id<HKGraphTileDrawingDelegate> drawingDelegate;              //@synthesize drawingDelegate=_drawingDelegate - In the implementation block
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,readonly) BOOL tileDisplayedSinceSetNeedsDisplay;                           //@synthesize tileDisplayedSinceSetNeedsDisplay=_tileDisplayedSinceSetNeedsDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setNeedsDisplay;
-(id)initWithParentView:(id)arg1 ;
-(BOOL)hidden;
-(long long)column;
-(id<HKGraphTileDrawingDelegate>)drawingDelegate;
-(void)setDrawingDelegate:(id<HKGraphTileDrawingDelegate>)arg1 ;
-(void)setColumn:(long long)arg1 ;
-(void)configureTileWithScreenRect:(CGRect)arg1 column:(long long)arg2 ;
-(BOOL)tileDisplayedSinceSetNeedsDisplay;
-(CALayer *)caLayer;
-(void)setCaLayer:(CALayer *)arg1 ;
@end

