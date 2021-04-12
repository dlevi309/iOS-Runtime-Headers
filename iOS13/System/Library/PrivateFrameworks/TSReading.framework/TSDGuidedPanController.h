/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDPanGuide;
#import <TSReading/TSReading-Structs.h>
@class TSDInteractiveCanvasController, TSDCanvasView, TSDCanvasLayer, UIScrollView;

@interface TSDGuidedPanController : NSObject {

	TSDInteractiveCanvasController* _interactiveCanvasController;
	TSDCanvasView* _canvasView;
	TSDCanvasLayer* _canvasLayer;
	UIScrollView* _canvasScrollView;
	id<TSDPanGuide> _guide;
	CGPoint _startPoint;
	CGPoint _movement;
	CGPoint _velocity;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (assign,nonatomic) TSDCanvasView * canvasView;                                                //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic) TSDCanvasLayer * canvasLayer;                                              //@synthesize canvasLayer=_canvasLayer - In the implementation block
@property (assign,nonatomic) UIScrollView * canvasScrollView;                                           //@synthesize canvasScrollView=_canvasScrollView - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                                                        //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint movement;                                                          //@synthesize movement=_movement - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                                                          //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) id<TSDPanGuide> guide;                                                     //@synthesize guide=_guide - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS69 touchContentPlacement; 
@property (nonatomic,readonly) SCD_Struct_TS69 centerPlusMovementContentPlacement; 
-(void)dealloc;
-(CGPoint)velocity;
-(void)setVelocity:(CGPoint)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setCanvasView:(TSDCanvasView *)arg1 ;
-(TSDCanvasView *)canvasView;
-(CGPoint)startPoint;
-(CGPoint)movement;
-(void)setMovement:(CGPoint)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(TSDCanvasLayer *)canvasLayer;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(void)setInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 ;
-(id)p_currentContentLocationWithPlacement:(SCD_Struct_TS69)arg1 ;
-(void)p_willBegin;
-(SCD_Struct_TS69)touchContentPlacement;
-(CATransform3D)p_transformForContentLocation:(id)arg1 placement:(SCD_Struct_TS69)arg2 ;
-(void)p_scrollToContentLocation:(id)arg1 placement:(SCD_Struct_TS69)arg2 ;
-(void)p_didEnd;
-(id)p_convertContentLocation:(id)arg1 fromPlacement:(SCD_Struct_TS69)arg2 toPlacement:(SCD_Struct_TS69)arg3 ;
-(CGPoint)p_boundsOffsetForContentLocation:(id)arg1 placement:(SCD_Struct_TS69)arg2 ;
-(id)convertContentLocation:(id)arg1 fromPlacement:(SCD_Struct_TS69)arg2 toPlacement:(SCD_Struct_TS69)arg3 ;
-(SCD_Struct_TS69)centerPlusMovementContentPlacement;
-(void)setCanvasLayer:(TSDCanvasLayer *)arg1 ;
-(UIScrollView *)canvasScrollView;
-(void)setCanvasScrollView:(UIScrollView *)arg1 ;
-(id<TSDPanGuide>)guide;
-(void)setGuide:(id<TSDPanGuide>)arg1 ;
@end

