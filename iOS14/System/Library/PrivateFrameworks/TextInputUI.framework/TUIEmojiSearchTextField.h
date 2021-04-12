/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UITextField.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TUIEmojiSearchTextFieldDelegate;
@class NSDate, UIImageView, TUIEmojiSearchTextFieldPortalView, TUIEmojiSearchTextFieldBackgroundView, NSString;

@interface TUIEmojiSearchTextField : UITextField <UITextFieldDelegate> {

	NSDate* _highlightBeginTime;
	UIImageView* _magnifyingGlassView;
	TUIEmojiSearchTextFieldPortalView* _portalView;
	TUIEmojiSearchTextFieldBackgroundView* _backgroundView;
	BOOL _active;
	BOOL _pretendsToBecomeFirstResponder;
	id<TUIEmojiSearchTextFieldDelegate> _searchDelegate;

}

@property (assign,nonatomic,__weak) id<TUIEmojiSearchTextFieldDelegate> searchDelegate;              //@synthesize searchDelegate=_searchDelegate - In the implementation block
@property (nonatomic,readonly) BOOL pretendsToBecomeFirstResponder;                                  //@synthesize pretendsToBecomeFirstResponder=_pretendsToBecomeFirstResponder - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(id)insertionPointColor;
-(void)_setRenderConfig:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)paste:(id)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(id<TUIEmojiSearchTextFieldDelegate>)searchDelegate;
-(BOOL)isActive;
-(void)setSearchDelegate:(id<TUIEmojiSearchTextFieldDelegate>)arg1 ;
-(BOOL)isEditing;
-(void)fieldEditorDidChange:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)initWithFrame:(CGRect)arg1 pretendsToBecomeFirstResponder:(BOOL)arg2 ;
-(id)_textAndGlyphColorForRenderConfig:(id)arg1 ;
-(id)_textAndGlyphCompositingFilterForRenderConfig:(id)arg1 ;
-(void)_matchPortalViewFrame:(CGRect)arg1 ;
-(void)_windowBecameKeyNotificationPosted:(id)arg1 ;
-(BOOL)pretendsToBecomeFirstResponder;
-(id)portalView;
-(id)_clearButton;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(id)selectionContainerView;
-(BOOL)_isInteractiveDespiteResponderStatus;
-(void)setHighlighted:(BOOL)arg1 ;
@end

