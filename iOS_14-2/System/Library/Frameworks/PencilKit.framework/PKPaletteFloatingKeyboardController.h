/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKPaletteFloatingKeyboardControllerDelegate;
@class UIKeyboardInputMode;

@interface PKPaletteFloatingKeyboardController : NSObject {

	BOOL _presentingKeyboard;
	BOOL _processingReloadInputViews;
	id<PKPaletteFloatingKeyboardControllerDelegate> _delegate;
	UIKeyboardInputMode* _emojiInputMode;

}

@property (assign,getter=isPresentingKeyboard,nonatomic) BOOL presentingKeyboard;                              //@synthesize presentingKeyboard=_presentingKeyboard - In the implementation block
@property (assign,getter=isProcessingReloadInputViews,nonatomic) BOOL processingReloadInputViews;              //@synthesize processingReloadInputViews=_processingReloadInputViews - In the implementation block
@property (nonatomic,readonly) UIKeyboardInputMode * emojiInputMode;                                           //@synthesize emojiInputMode=_emojiInputMode - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteFloatingKeyboardControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(long long)floatingKeyboardType;
-(id)init;
-(id<PKPaletteFloatingKeyboardControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteFloatingKeyboardControllerDelegate>)arg1 ;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(void)dealloc;
-(void)didChangeInputMode;
-(void)notifyDelegateDidChangeKeyboardType;
-(BOOL)isPresentingKeyboard;
-(void)updateFloatingKeyboardType;
-(BOOL)isProcessingReloadInputViews;
-(void)dismissWithReason:(id)arg1 ;
-(id)_responderFromDelegate;
-(void)_presentKeyboardWithType:(long long)arg1 forResponder:(id)arg2 ;
-(void)setPresentingKeyboard:(BOOL)arg1 ;
-(void)_setTraitsForActiveKeyboard:(id)arg1 forResponder:(id)arg2 ;
-(UIKeyboardInputMode *)emojiInputMode;
-(void)setProcessingReloadInputViews:(BOOL)arg1 ;
-(void)presentOrDismissIfPresented;
@end

