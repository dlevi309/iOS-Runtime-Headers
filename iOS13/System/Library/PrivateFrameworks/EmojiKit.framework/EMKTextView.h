/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <UIKitCore/UITextView.h>

@class EMKOverlayView, EMKGestureRecognizerDelegate, EMFEmojiPreferences, NSTimer;

@interface EMKTextView : UITextView {

	EMKOverlayView* _overlayView;
	unsigned long long _tappedGlyphIndex;
	NSRange _tappedGlyphRange;
	EMKGestureRecognizerDelegate* _gestureRecognizerDelegate;
	EMFEmojiPreferences* _emojiPreferences;
	NSTimer* _timer;
	CGRect _displayRect;
	BOOL _emojiConversionActive;

}

@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled; 
-(void)dealloc;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)deleteBackward;
-(void)inputModeDidChange:(id)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(BOOL)_shouldSuppressSelectionCommands;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setPreFrames:(unsigned long long)arg1 ;
-(void)setPostFrames:(unsigned long long)arg1 ;
-(void)setDelayFrames:(unsigned long long)arg1 ;
-(BOOL)isEmojiConversionEnabled;
-(void)setEmojiConversionEnabled:(BOOL)arg1 ;
-(void)calculateDisplayRect;
-(void)updateEmojiDisplay:(id)arg1 ;
-(void)dismissOverlayView;
-(void)stopTimer:(id)arg1 ;
-(void)setEmojiConversionLanguagesAndActivateConversion:(BOOL)arg1 ;
-(void)setEmojiConversionLanguagesForInputModeChange:(id)arg1 ;
-(void)setEmojiConversionLanguagesForKeyboardShow:(id)arg1 ;
-(void)textTapGestureRecognized:(id)arg1 ;
-(void)startTimer:(id)arg1 ;
-(void)emojifyingDisabled:(id)arg1 ;
-(id)personalizedEmojiTokenListForList:(id)arg1 ;
-(void)replaceRange:(NSRange)arg1 withEmojiToken:(id)arg2 language:(id)arg3 ;
-(CGRect)anchorRect;
-(void)updateOverlayView:(id)arg1 ;
-(BOOL)touchHasEmojiSignificance:(id)arg1 ;
@end

