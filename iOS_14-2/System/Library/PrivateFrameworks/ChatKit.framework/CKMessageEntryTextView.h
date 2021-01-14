/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <EmojiKit/EMKTextView.h>
#import <UIKit/UIScribbleInteractionDelegate.h>

@class UIColor, NSString, UILabel, UIKeyboardInputMode, UIScribbleInteraction, NSAttributedString;

@interface CKMessageEntryTextView : EMKTextView <UIScribbleInteractionDelegate> {

	BOOL _showingDictationPlaceholder;
	BOOL _inPencilMode;
	BOOL _pencilWriting;
	BOOL _sendCurrentLocationFromKeyboardEnabled;
	BOOL _updatesFontOnTextChange;
	BOOL _hideCaret;
	BOOL _hideCaretUntilUserTypes;
	BOOL _preventShowingCalloutMenu;
	UIColor* _placeholderColor;
	double _placeHolderWidth;
	double _placeholderExpandedWidth;
	NSString* _autocorrectionContext;
	NSString* _responseContext;
	double _adjustedLineFragmentPadding;
	UILabel* _placeholderLabel;
	UIKeyboardInputMode* _savedKeyboardInputMode;
	UIScribbleInteraction* _scribbleInteraction;

}

@property (assign,getter=isShowingDictationPlaceholder,nonatomic) BOOL showingDictationPlaceholder;              //@synthesize showingDictationPlaceholder=_showingDictationPlaceholder - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                                         //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * savedKeyboardInputMode;                                       //@synthesize savedKeyboardInputMode=_savedKeyboardInputMode - In the implementation block
@property (nonatomic,retain) UIScribbleInteraction * scribbleInteraction;                                        //@synthesize scribbleInteraction=_scribbleInteraction - In the implementation block
@property (assign,getter=isPencilWriting,nonatomic) BOOL pencilWriting;                                          //@synthesize pencilWriting=_pencilWriting - In the implementation block
@property (nonatomic,copy) NSAttributedString * compositionText; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,copy) UIColor * placeholderColor;                                                           //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) double placeHolderWidth;                                                            //@synthesize placeHolderWidth=_placeHolderWidth - In the implementation block
@property (assign,nonatomic) double placeholderExpandedWidth;                                                    //@synthesize placeholderExpandedWidth=_placeholderExpandedWidth - In the implementation block
@property (getter=isSingleLine,nonatomic,readonly) BOOL singleLine; 
@property (assign,getter=isInPencilMode,nonatomic) BOOL inPencilMode;                                            //@synthesize inPencilMode=_inPencilMode - In the implementation block
@property (nonatomic,copy) NSString * autocorrectionContext;                                                     //@synthesize autocorrectionContext=_autocorrectionContext - In the implementation block
@property (nonatomic,copy) NSString * responseContext;                                                           //@synthesize responseContext=_responseContext - In the implementation block
@property (assign,nonatomic) BOOL sendCurrentLocationFromKeyboardEnabled;                                        //@synthesize sendCurrentLocationFromKeyboardEnabled=_sendCurrentLocationFromKeyboardEnabled - In the implementation block
@property (assign,nonatomic) BOOL updatesFontOnTextChange;                                                       //@synthesize updatesFontOnTextChange=_updatesFontOnTextChange - In the implementation block
@property (assign,nonatomic) BOOL hideCaret;                                                                     //@synthesize hideCaret=_hideCaret - In the implementation block
@property (assign,nonatomic) BOOL hideCaretUntilUserTypes;                                                       //@synthesize hideCaretUntilUserTypes=_hideCaretUntilUserTypes - In the implementation block
@property (assign,nonatomic) BOOL preventShowingCalloutMenu;                                                     //@synthesize preventShowingCalloutMenu=_preventShowingCalloutMenu - In the implementation block
@property (assign,nonatomic) double adjustedLineFragmentPadding;                                                 //@synthesize adjustedLineFragmentPadding=_adjustedLineFragmentPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScribbleInteraction *)scribbleInteraction;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setScribbleInteraction:(UIScribbleInteraction *)arg1 ;
-(UIColor *)placeholderColor;
-(void)setInPencilMode:(BOOL)arg1 ;
-(void)setPencilWriting:(BOOL)arg1 ;
-(double)placeHolderWidth;
-(void)setupScribbleInteraction;
-(void)updateTextView;
-(void)setShowingDictationPlaceholder:(BOOL)arg1 ;
-(BOOL)updatesFontOnTextChange;
-(void)updateFontIfNeeded;
-(double)placeholderExpandedWidth;
-(BOOL)sendCurrentLocationFromKeyboardEnabled;
-(void)setUpdatesFontOnTextChange:(BOOL)arg1 ;
-(BOOL)hideCaretUntilUserTypes;
-(double)adjustedLineFragmentPadding;
-(void)setAdjustedLineFragmentPadding:(double)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(BOOL)hideCaret;
-(NSString *)placeholderText;
-(BOOL)preventShowingCalloutMenu;
-(void)setCompositionText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UIKeyboardInputMode *)savedKeyboardInputMode;
-(void)setSavedKeyboardInputMode:(UIKeyboardInputMode *)arg1 ;
-(void)saveKeyboardInputMode;
-(void)restoreKeyboardInputMode;
-(void)setHideCaretUntilUserTypes:(BOOL)arg1 ;
-(void)scribbleInteractionDidFinishWriting:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)setAutocorrectionContext:(NSString *)arg1 ;
-(void)scribbleInteractionWillBeginWriting:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(NSString *)responseContext;
-(NSString *)autocorrectionContext;
-(SEL)_sendCurrentLocationAction;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(UILabel *)placeholderLabel;
-(BOOL)isSingleLine;
-(void)setPlaceHolderWidth:(double)arg1 ;
-(void)setPlaceholderExpandedWidth:(double)arg1 ;
-(void)setHideCaret:(BOOL)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(BOOL)isInPencilMode;
-(BOOL)isPencilWriting;
-(void)setPreventShowingCalloutMenu:(BOOL)arg1 ;
-(NSAttributedString *)compositionText;
-(void)setSendCurrentLocationFromKeyboardEnabled:(BOOL)arg1 ;
-(BOOL)isShowingDictationPlaceholder;
-(void)setResponseContext:(NSString *)arg1 ;
-(void)dealloc;
@end

