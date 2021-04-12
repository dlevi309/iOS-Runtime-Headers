/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKDrawingGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKDrawingGestureTarget.h>

@protocol PKPaintAreaViewDelegate;
@class PKDrawingGestureRecognizer, PKPaintAreaViewSurface, NSMutableArray, PKInk, NSString;

@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget> {

	PKDrawingGestureRecognizer* _drawingGestureRecognizer;
	PKPaintAreaViewSurface* _currentPaintSurfaceObject;
	NSMutableArray* _liveSurfaces;
	BOOL _switchSurfacesDuringStrokes;
	BOOL _fingerDrawingEnabled;
	id<PKPaintAreaViewDelegate> _delegate;
	PKInk* _ink;

}

@property (nonatomic,readonly) CGAffineTransform strokeTransform; 
@property (assign,nonatomic,__weak) id<PKPaintAreaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL switchSurfacesDuringStrokes;                         //@synthesize switchSurfacesDuringStrokes=_switchSurfacesDuringStrokes - In the implementation block
@property (assign,nonatomic) BOOL fingerDrawingEnabled;                                //@synthesize fingerDrawingEnabled=_fingerDrawingEnabled - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                              //@synthesize ink=_ink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<PKPaintAreaViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaintAreaViewDelegate>)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(void)setFingerDrawingEnabled:(BOOL)arg1 ;
-(CGAffineTransform)strokeTransform;
-(BOOL)canAddStroke;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(SCD_Struct_PK7)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(BOOL)arg3 ;
-(void)drawingBegan:(id)arg1 ;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)drawingEnded:(id)arg1 ;
-(void)drawingCancelled;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1 ;
-(BOOL)fingerDrawingEnabled;
-(id)hitSurface:(CGPoint)arg1 ;
-(void)switchToNewPaintSurface:(id)arg1 ;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 previousPoint:(CGPoint)arg2 newSurface:(id*)arg3 ;
-(void)vsync:(double)arg1 ;
-(BOOL)switchSurfacesDuringStrokes;
-(void)setSwitchSurfacesDuringStrokes:(BOOL)arg1 ;
@end

