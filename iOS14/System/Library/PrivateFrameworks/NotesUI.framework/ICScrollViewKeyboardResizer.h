/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol ICScrollViewKeyboardResizerDelegate;
#import <NotesUI/NotesUI-Structs.h>
@class UIScrollView;

@interface ICScrollViewKeyboardResizer : NSObject {

	BOOL _autoResizing;
	BOOL _showingKeyboard;
	BOOL _observingKeyboardNotifications;
	BOOL _didResizeScrollView;
	id<ICScrollViewKeyboardResizerDelegate> _delegate;

}

@property (assign,getter=isObservingKeyboardNotifications,nonatomic) BOOL observingKeyboardNotifications;              //@synthesize observingKeyboardNotifications=_observingKeyboardNotifications - In the implementation block
@property (assign,getter=isAutoResizing,nonatomic) BOOL autoResizing;                                                  //@synthesize autoResizing=_autoResizing - In the implementation block
@property (assign,nonatomic) BOOL didResizeScrollView;                                                                 //@synthesize didResizeScrollView=_didResizeScrollView - In the implementation block
@property (assign,nonatomic) BOOL showingKeyboard;                                                                     //@synthesize showingKeyboard=_showingKeyboard - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) id<ICScrollViewKeyboardResizerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<ICScrollViewKeyboardResizerDelegate>)delegate;
-(void)setDelegate:(id<ICScrollViewKeyboardResizerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)dealloc;
-(BOOL)isObservingKeyboardNotifications;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(void)setObservingKeyboardNotifications:(BOOL)arg1 ;
-(void)applyInsetsFromKeyboardFrame:(CGRect)arg1 duration:(double)arg2 ;
-(BOOL)didResizeScrollView;
-(void)clearInsetsWithDuration:(double)arg1 ;
-(void)setAutoResizing:(BOOL)arg1 ;
-(void)setDidResizeScrollView:(BOOL)arg1 ;
-(void)setShowingKeyboard:(BOOL)arg1 ;
-(void)startAutoResizing;
-(void)stopAutoResizing;
-(void)reapplyInsets;
-(BOOL)isAutoResizing;
-(BOOL)showingKeyboard;
@end

