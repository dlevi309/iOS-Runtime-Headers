/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>
#import <TSReading/TSDTilingLayerDelegate.h>

@class CALayer, NSString;

@interface TSWPEquationRep : TSDRep <TSDTilingLayerDelegate> {

	CALayer* _equationLayer;

}

@property (nonatomic,retain) CALayer * equationLayer;               //@synthesize equationLayer=_equationLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(void)screenScaleDidChange;
-(BOOL)directlyManagesLayerContent;
-(void)didUpdateLayer:(id)arg1 ;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(CGRect)visibleBoundsForTilingLayer:(id)arg1 ;
-(CGRect)clipRect;
-(CALayer *)equationLayer;
-(void)setEquationLayer:(CALayer *)arg1 ;
@end

