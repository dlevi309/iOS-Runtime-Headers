/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 animated:(BOOL)arg3 ;
-(void)setRangesExcludeSelection:(BOOL)arg1 ;
-(id)_caretColor;
-(void)_insertAtRangeOrPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(id)_maskForRects:(id)arg1 ;
-(CGRect)_configureMask:(id)arg1 withPath:(id)arg2 ;
-(BOOL)_isRemoveAnimatesBackToCaret;
-(void)insertAtPosition:(id)arg1 ;
-(void)_updateToRangeOrPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(void)insertAtRange:(id)arg1 ;
-(BOOL)rangesExcludeSelection;
-(void)insertAtPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertAtRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateToPosition:(id)arg1 ;
-(void)updateToRange:(id)arg1 ;
-(void)updateToPosition:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateToRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performUpdate:(id)arg1 ;
-(id)_rangeColor;
-(id)initWithTextInputView:(id)arg1 ;
-(void)insertAtRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(void)updateToRange:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(id)_rectsForRange:(id)arg1 ;
@end

