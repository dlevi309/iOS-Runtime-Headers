/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UITextInput;
@class UIView, CAShapeLayer;

@interface _UITextDragCaretView : UIView {

	UIView*<UITextInput> _view;
	CAShapeLayer* _mask;
	BOOL _rangesExcludeSelection;

}

@property (assign,nonatomic) BOOL rangesExcludeSelection;              //@synthesize rangesExcludeSelection=_rangesExcludeSelection - In the implementation block
-(void)remove;
-(void)_performUpdate:(id)arg1 ;
-(id)initWithTextInputView:(id)arg1 ;
-(void)insertAtRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(void)updateToRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(void)removeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 animated:(BOOL)arg3 ;
-(void)setRangesExcludeSelection:(BOOL)arg1 ;
-(void)_insertAtRangeOrPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(id)_caretColor;
-(id)_rangeColor;
-(id)_rectsForRange:(id)arg1 ;
-(id)_maskForRects:(id)arg1 ;
-(CGRect)_configureMask:(id)arg1 withPath:(id)arg2 ;
-(void)_updateToRangeOrPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(BOOL)_isRemoveAnimatesBackToCaret;
-(BOOL)rangesExcludeSelection;
-(void)insertAtPosition:(id)arg1 ;
-(void)insertAtPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertAtRange:(id)arg1 ;
-(void)insertAtRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateToPosition:(id)arg1 ;
-(void)updateToPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateToRange:(id)arg1 ;
-(void)updateToRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

