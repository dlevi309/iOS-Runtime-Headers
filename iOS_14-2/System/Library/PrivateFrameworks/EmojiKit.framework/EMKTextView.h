/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)deleteBackward;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)inputModeDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)keyboardDidShow:(id)arg1 ;
-(CGRect)anchorRect;
-(void)startTimer:(id)arg1 ;
-(void)dealloc;
-(BOOL)_shouldSuppressSelectionCommands;
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
-(void)emojifyingDisabled:(id)arg1 ;
-(id)personalizedEmojiTokenListForList:(id)arg1 ;
-(void)replaceRange:(NSRange)arg1 withEmojiToken:(id)arg2 language:(id)arg3 ;
-(void)updateOverlayView:(id)arg1 ;
-(BOOL)touchHasEmojiSignificance:(id)arg1 ;
@end

