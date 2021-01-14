/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKCanvasView *)canvasView;
-(double)drawingScale;
-(void)setCanvasView:(PKCanvasView *)arg1 ;
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

