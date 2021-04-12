/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSWPInteractiveCanvasControllerDelegate <TSDInteractiveCanvasControllerDelegate>
@property (nonatomic,readonly) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction; 
@optional
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;
-(void)showInsertPageNumberUIFromRect:(CGRect)arg1 inView:(id)arg2;
-(id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
-(BOOL)interactiveCanvasController:(id)arg1 allowsDragOfSmartField:(id)arg2;
-(BOOL)interactiveCanvasController:(id)arg1 configureHardPressGesture:(id)arg2;
-(BOOL)interactiveCanvasController:(id)arg1 tappedOnFootnoteAttachment:(id)arg2;
-(BOOL)interactiveCanvasControllerAllowsHyperlinkInteraction;

@end

