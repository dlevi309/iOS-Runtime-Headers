/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKAttachmentView.h>

@class PKCanvasView, NSMutableArray;

@interface PKCanvasAttachmentView : PKAttachmentView {

	BOOL __wantsFullyRenderedNotification;
	PKCanvasView* _canvasView;
	double _drawingWidth;
	NSMutableArray* _fullyRenderedCompletionBlocks;

}

@property (assign,nonatomic,__weak) PKCanvasView * canvasView;                            //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic) BOOL _wantsFullyRenderedNotification;                        //@synthesize _wantsFullyRenderedNotification=__wantsFullyRenderedNotification - In the implementation block
@property (assign,nonatomic) double drawingWidth;                                         //@synthesize drawingWidth=_drawingWidth - In the implementation block
@property (nonatomic,retain) NSMutableArray * fullyRenderedCompletionBlocks;              //@synthesize fullyRenderedCompletionBlocks=_fullyRenderedCompletionBlocks - In the implementation block
-(void)setCanvasView:(PKCanvasView *)arg1 ;
-(PKCanvasView *)canvasView;
-(double)drawingScale;
-(void)drawingDidChange;
-(BOOL)wantsFullyRendered;
-(void)fullyRendered;
-(BOOL)disableTileAnimations;
-(BOOL)_wantsFullyRenderedNotification;
-(double)drawingWidth;
-(void)set_wantsFullyRenderedNotification:(BOOL)arg1 ;
-(void)setDrawingWidth:(double)arg1 ;
-(NSMutableArray *)fullyRenderedCompletionBlocks;
-(void)setFullyRenderedCompletionBlocks:(NSMutableArray *)arg1 ;
@end

