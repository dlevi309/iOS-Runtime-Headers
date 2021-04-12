/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSKChangeSourceObserver.h>

@protocol TSDCanvasEditor;
@class TSKChangeNotifier, NSString;

@interface TSDCanvasEditorHelper : NSObject <TSKChangeSourceObserver> {

	TSKChangeNotifier* mChangeNotifier;
	id<TSDCanvasEditor> mCanvasEditor;
	BOOL mTornDown;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)canvasSelectionWithInfos:(id)arg1 ;
+(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2 ;
+(BOOL)physicalKeyboardIsSender:(id)arg1 ;
+(Class)selectionClass;
-(void)dealloc;
-(void)teardown;
-(id)documentRoot;
-(id)interactiveCanvasController;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id)canvasEditor;
-(id)canvasSelectionWithInfos:(id)arg1 ;
-(BOOL)isRepSelectable:(id)arg1 ;
-(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2 ;
-(BOOL)canDeleteComment;
-(id)initWithCanvasEditor:(id)arg1 ;
-(Class)editorClassForSelection:(id)arg1 ;
-(id)editorToPopToOnEndEditingForSelection:(id)arg1 ;
-(void)notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)pushNewEditorForSelection:(id)arg1 ;
-(id)canvasSelectionFromRep:(id)arg1 ;
-(BOOL)canUngroupWithSelection:(id)arg1 ;
-(BOOL)canPerformMaskWithShapeWithSender:(id)arg1 ;
-(Class)p_editorClassForSelection:(id)arg1 shouldIgnoreLockedState:(BOOL)arg2 ;
-(id)newEditorForEditorClass:(Class)arg1 ;
-(id)infosFromCanvasSelection:(id)arg1 ;
-(id)layoutsForAlignAndDistribute;
-(int)canvasEditorCanPerformCutAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformCopyAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformCopyStyleAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformDeleteAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformDuplicateAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformSelectAllAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformGroupAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformUngroupAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformAlignAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)canvasEditorCanPerformDistributeAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)p_canReduceFileSizeForSelectedImages;
-(BOOL)canPerformMaskWithSender:(id)arg1 ;
-(BOOL)canPerformUnmaskWithSender:(id)arg1 ;
-(BOOL)canPerformMaskWithShapeTypeWithSender:(id)arg1 ;
-(int)canvasEditorCanPerformLockAction:(SEL)arg1 withSender:(id)arg2 ;
-(Class)editorClassForSelectionIgnoringLockedState:(id)arg1 ;
-(BOOL)p_selectionContainsInlineObjects:(id)arg1 ;
-(void)p_copy:(id)arg1 ;
-(BOOL)canGroupDrawables:(id)arg1 ;
@end

