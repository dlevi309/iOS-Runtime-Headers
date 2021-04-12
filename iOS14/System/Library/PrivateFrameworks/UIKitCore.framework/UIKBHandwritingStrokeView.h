/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBHandwritingView;

@interface UIKBHandwritingStrokeView : UIView {

	UIKBHandwritingView* _keyView;
	CGContextRef _bitmapContext;
	double _scaleFactor;
	CGRect _aggregateInvalidRect;

}

@property (nonatomic,readonly) CGContextRef bitmapContext;                      //@synthesize bitmapContext=_bitmapContext - In the implementation block
@property (nonatomic,readonly) double scaleFactor;                              //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGRect aggregateInvalidRect;                     //@synthesize aggregateInvalidRect=_aggregateInvalidRect - In the implementation block
@property (assign,nonatomic,__weak) UIKBHandwritingView * keyView;              //@synthesize keyView=_keyView - In the implementation block
-(double)scaleFactor;
-(UIKBHandwritingView *)keyView;
-(void)updateInkColor;
-(void)createBitmapIfNeeded;
-(SCD_Struct_UI98)viewPointFromDataPoint:(SCD_Struct_UI98)arg1 ;
-(CGRect)handwritingPointToRect:(SCD_Struct_UI98)arg1 ;
-(CGRect)convertRectToBitmapCoordinates:(CGRect)arg1 ;
-(CGRect)convertRectToViewCoordinates:(CGRect)arg1 ;
-(void)redrawStrokesInRect:(CGRect)arg1 ;
-(void)displayAggregateInvalidRect;
-(void)addTrapezoidFromFirstPoint:(SCD_Struct_UI98)arg1 secondPoint:(SCD_Struct_UI98)arg2 ;
-(void)addHandwritingPoint:(SCD_Struct_UI98)arg1 ;
-(BOOL)_wantsDeepDrawing;
-(CGRect)aggregateInvalidRect;
-(void)drawRect:(CGRect)arg1 ;
-(void)clearRect:(CGRect)arg1 ;
-(void)setKeyView:(UIKBHandwritingView *)arg1 ;
-(void)dealloc;
-(CGContextRef)bitmapContext;
@end

