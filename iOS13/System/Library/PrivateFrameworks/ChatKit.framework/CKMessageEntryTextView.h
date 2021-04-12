/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <EmojiKit/EMKTextView.h>

@class UIColor, NSString, UILabel, UIKeyboardInputMode, NSAttributedString;

@interface CKMessageEntryTextView : EMKTextView {

	BOOL _showingDictationPlaceholder;
	BOOL _sendCurrentLocationFromKeyboardEnabled;
	BOOL _updatesFontOnTextChange;
	BOOL _hideCaret;
	UIColor* _placeholderColor;
	double _placeHolderWidth;
	double _placeholderExpandedWidth;
	NSString* _autocorrectionContext;
	NSString* _responseContext;
	double _adjustedLineFragmentPadding;
	UILabel* _placeholderLabel;
	UIKeyboardInputMode* _savedKeyboardInputMode;

}

@property (assign,getter=isShowingDictationPlaceholder,nonatomic) BOOL showingDictationPlaceholder;              //@synthesize showingDictationPlaceholder=_showingDictationPlaceholder - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                                         //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * savedKeyboardInputMode;                                       //@synthesize savedKeyboardInputMode=_savedKeyboardInputMode - In the implementation block
@property (nonatomic,copy) NSAttributedString * compositionText; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,copy) UIColor * placeholderColor;                                                           //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) double placeHolderWidth;                                                            //@synthesize placeHolderWidth=_placeHolderWidth - In the implementation block
@property (assign,nonatomic) double placeholderExpandedWidth;                                                    //@synthesize placeholderExpandedWidth=_placeholderExpandedWidth - In the implementation block
@property (getter=isSingleLine,nonatomic,readonly) BOOL singleLine; 
@property (nonatomic,copy) NSString * autocorrectionContext;                                                     //@synthesize autocorrectionContext=_autocorrectionContext - In the implementation block
@property (nonatomic,copy) NSString * responseContext;                                                           //@synthesize responseContext=_responseContext - In the implementation block
@property (assign,nonatomic) BOOL sendCurrentLocationFromKeyboardEnabled;                                        //@synthesize sendCurrentLocationFromKeyboardEnabled=_sendCurrentLocationFromKeyboardEnabled - In the implementation block
@property (assign,nonatomic) BOOL updatesFontOnTextChange;                                                       //@synthesize updatesFontOnTextChange=_updatesFontOnTextChange - In the implementation block
@property (assign,nonatomic) BOOL hideCaret;                                                                     //@synthesize hideCaret=_hideCaret - In the implementation block
@property (assign,nonatomic) double adjustedLineFragmentPadding;                                                 //@synthesize adjustedLineFragmentPadding=_adjustedLineFragmentPadding - In the implementation block
-(void)dealloc;
-(void)setFont:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(void)setAttributedText:(id)arg1 ;
-(NSString *)autocorrectionContext;
-(void)setAutocorrectionContext:(NSString *)arg1 ;
-(NSString *)responseContext;
-(void)setResponseContext:(NSString *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)insertDictationResultPlaceholder;
-(SEL)_sendCurrentLocationAction;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UIColor *)placeholderColor;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)updateTextView;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)setPlaceHolderWidth:(double)arg1 ;
-(void)setPlaceholderExpandedWidth:(double)arg1 ;
-(BOOL)isSingleLine;
-(void)setHideCaret:(BOOL)arg1 ;
-(void)setSendCurrentLocationFromKeyboardEnabled:(BOOL)arg1 ;
-(NSAttributedString *)compositionText;
-(BOOL)isShowingDictationPlaceholder;
-(void)saveKeyboardInputMode;
-(void)restoreKeyboardInputMode;
-(BOOL)hideCaret;
-(void)setCompositionText:(NSAttributedString *)arg1 ;
-(void)setSavedKeyboardInputMode:(UIKeyboardInputMode *)arg1 ;
-(double)placeHolderWidth;
-(void)setShowingDictationPlaceholder:(BOOL)arg1 ;
-(BOOL)updatesFontOnTextChange;
-(UIKeyboardInputMode *)savedKeyboardInputMode;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)updateFontIfNeeded;
-(double)placeholderExpandedWidth;
-(BOOL)sendCurrentLocationFromKeyboardEnabled;
-(void)setUpdatesFontOnTextChange:(BOOL)arg1 ;
-(double)adjustedLineFragmentPadding;
-(void)setAdjustedLineFragmentPadding:(double)arg1 ;
@end

