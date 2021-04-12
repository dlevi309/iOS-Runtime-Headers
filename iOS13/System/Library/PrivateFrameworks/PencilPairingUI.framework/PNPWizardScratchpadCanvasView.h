/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKCanvasViewDelegate;
@class NSMutableArray, PKInk, PKCanvasView, UIGestureRecognizer;

@interface PNPWizardScratchpadCanvasView : UIView {

	NSMutableArray* _snapshotImageViews;
	PKInk* _ink;
	id<PKCanvasViewDelegate> _canvasViewDelegate;
	BOOL _showingSnapshot;
	PKCanvasView* _canvasView;

}

@property (assign,nonatomic) BOOL showingSnapshot;                                          //@synthesize showingSnapshot=_showingSnapshot - In the implementation block
@property (assign,nonatomic,__weak) id<PKCanvasViewDelegate> delegate; 
@property (nonatomic,readonly) PKCanvasView * canvasView;                                   //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) PKInk * ink; 
@property (nonatomic,readonly) UIGestureRecognizer * drawingGestureRecognizer; 
-(id<PKCanvasViewDelegate>)delegate;
-(void)setDelegate:(id<PKCanvasViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PKCanvasView *)canvasView;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(UIGestureRecognizer *)drawingGestureRecognizer;
-(BOOL)showingSnapshot;
-(void)setShowingSnapshot:(BOOL)arg1 ;
-(void)_playClearAnimationWithImage:(id)arg1 ;
-(void)clearDrawingAnimated;
-(void)prepareCanvasView;
@end

