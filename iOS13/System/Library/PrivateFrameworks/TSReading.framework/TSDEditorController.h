/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDEditor;
@class TSKDocumentRoot, NSMutableArray, NSObject, NSMutableDictionary;

@interface TSDEditorController : NSObject {

	TSKDocumentRoot* mDocumentRoot;
	NSMutableArray* mEditorStack;
	NSObject*<TSDEditor> mTextInputEditor;
	unsigned long long mTransactionLevel;
	BOOL mDidChangeTextInputEditor;
	BOOL mDidChangeCurrentEditors;
	BOOL mNotifiedWillChangeTextInputEditor;
	BOOL mNotifiedWillChangeCurrentEditors;
	BOOL mIsReentrantResigningTextInputEditors;
	NSMutableArray* mResignedTextInputEditors;
	NSMutableDictionary* mInspectorPropertyValueMap;
	unsigned long long mChangingCurrentEditorsWhenCommittingInspectorChangesCount;

}

@property (getter=isChangingCurrentEditorsWhenCommittingInspectorChanges,nonatomic,readonly) BOOL changingCurrentEditorsWhenCommittingInspectorChanges; 
-(id)init;
-(void)dealloc;
-(void)beginTransaction;
-(void)endTransaction;
-(void)teardown;
-(id)textInputEditor;
-(id)editorForEditAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)currentEditors;
-(void)popEditor:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)pushEditor:(id)arg1 ;
-(void)enumerateEditorsOnStackUsingBlock:(/*^block*/id)arg1 ;
-(void)setTextInputEditor:(id)arg1 ;
-(id)mostSpecificCurrentEditorOfClass:(Class)arg1 ;
-(id)editorForEditAction:(SEL)arg1 withSender:(id)arg2 response:(int*)arg3 ;
-(void)popToEditor:(id)arg1 ;
-(void)p_setTextInputEditor:(id)arg1 ;
-(void)notifyResignedTextInputEditors;
-(void)p_willChangeCurrentEditorsWithNewEditors:(id)arg1 ;
-(void)p_didChangeCurrentEditors;
-(void)p_willChangeTextInputEditor;
-(void)p_didChangeTextInputEditor;
-(void)p_willChangeCurrentEditors;
-(id)mostSpecificCurrentEditorOfClass:(Class)arg1 conformingToProtocol:(id)arg2 ;
-(BOOL)anyEditorProhibitsAction:(SEL)arg1 ;
-(void)popEditor:(id)arg1 andPushTextInputEditor:(id)arg2 ;
-(id)currentEditorsOfClass:(Class)arg1 ;
-(id)currentEditorsConformingToProtocol:(id)arg1 ;
-(id)mostSpecificEditorConformingToProtocol:(id)arg1 ;
-(void)setObject:(id)arg1 forInspectorPropertyKey:(id)arg2 ;
-(void)removeObjectForInspectorPropertyKey:(id)arg1 ;
-(id)objectForInspectorPropertyKey:(id)arg1 ;
-(BOOL)isChangingCurrentEditorsWhenCommittingInspectorChanges;
-(void)willChangeCurrentEditorsWhenCommittingInspectorChanges;
-(void)didChangeCurrentEditorsWhenCommittingInspectorChanges;
-(void)editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned long long)arg2 ;
-(void)editorSelectionWasForciblyChanged:(id)arg1 ;
-(void)editorDidChangeSelectionAndWantsKeyboard:(id)arg1 withSelectionFlags:(unsigned long long)arg2 ;
@end

