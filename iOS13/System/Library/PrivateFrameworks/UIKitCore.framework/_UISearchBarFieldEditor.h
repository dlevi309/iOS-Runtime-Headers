/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIFieldEditor.h>

@class NSMutableSet;

@interface _UISearchBarFieldEditor : UIFieldEditor {

	struct {
		unsigned inLayoutSubviews : 1;
	}  _flags;
	NSMutableSet* _atomViews;

}

@property (retain) NSMutableSet * _atomViews;              //@synthesize atomViews=_atomViews - In the implementation block
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(void)layoutSubviews;
-(void)_updateTokenViews;
-(void)activateEditor;
-(void)deactivateEditorDiscardingEdits:(BOOL)arg1 ;
-(double)_uiatom_currentScreenScale;
-(id)selectionRectsForRange:(id)arg1 ;
-(CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2 ;
-(NSMutableSet *)_atomViews;
-(void)set_atomViews:(NSMutableSet *)arg1 ;
@end

