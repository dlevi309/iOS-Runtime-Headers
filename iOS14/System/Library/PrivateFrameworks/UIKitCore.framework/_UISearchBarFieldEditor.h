/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIFieldEditor.h>

@interface _UISearchBarFieldEditor : UIFieldEditor {

	struct {
		unsigned inLayoutSubviews : 1;
	}  _flags;

}
-(id)selectionRectsForRange:(id)arg1 ;
-(void)deactivateEditorDiscardingEdits:(BOOL)arg1 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)_updateTokenViews;
-(BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2 ;
-(void)activateEditor;
@end

