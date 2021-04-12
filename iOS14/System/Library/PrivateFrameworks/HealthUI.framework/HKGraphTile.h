/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(long long)column;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(CALayer *)caLayer;
-(id)initWithParentView:(id)arg1 ;
-(void)dealloc;
-(void)setColumn:(long long)arg1 ;
-(id<HKGraphTileDrawingDelegate>)drawingDelegate;
-(void)configureTileWithScreenRect:(CGRect)arg1 column:(long long)arg2 ;
-(void)setDrawingDelegate:(id<HKGraphTileDrawingDelegate>)arg1 ;
-(BOOL)tileDisplayedSinceSetNeedsDisplay;
-(void)setCaLayer:(CALayer *)arg1 ;
@end

