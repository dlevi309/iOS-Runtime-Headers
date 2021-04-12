/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <SearchUI/SearchUISearchField.h>

@class NSArray, UIImage, UIButton, SPUIHeaderBlurView, UIView, NSString, SPSearchEntity;

@interface SPUITextField : SearchUISearchField {

	BOOL _ignoreTokensUpdate;
	NSArray* _suggestions;
	UIImage* _clearButtonImage;
	UIButton* _microphoneButton;
	long long _activeInterfaceOrientation;
	SPUIHeaderBlurView* _blurView;
	UIView* _tintView;
	NSString* _lastSearchText;
	SPSearchEntity* _lastSearchEntity;
	CGSize _imageSize;

}

@property (retain) NSArray * suggestions;                               //@synthesize suggestions=_suggestions - In the implementation block
@property (assign) CGSize imageSize;                                    //@synthesize imageSize=_imageSize - In the implementation block
@property (retain) UIImage * clearButtonImage;                          //@synthesize clearButtonImage=_clearButtonImage - In the implementation block
@property (retain) UIButton * microphoneButton;                         //@synthesize microphoneButton=_microphoneButton - In the implementation block
@property (assign) long long activeInterfaceOrientation;                //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (retain) SPUIHeaderBlurView * blurView;                       //@synthesize blurView=_blurView - In the implementation block
@property (retain) UIView * tintView;                                   //@synthesize tintView=_tintView - In the implementation block
@property (readonly) SPSearchEntity * searchEntity; 
@property (retain) NSString * lastSearchText;                           //@synthesize lastSearchText=_lastSearchText - In the implementation block
@property (retain) SPSearchEntity * lastSearchEntity;                   //@synthesize lastSearchEntity=_lastSearchEntity - In the implementation block
@property (retain) id<SearchUITextFieldDelegate> delegate; 
@property (assign) BOOL ignoreTokensUpdate;                             //@synthesize ignoreTokensUpdate=_ignoreTokensUpdate - In the implementation block
+(BOOL)_isRTL;
+(Class)_backgroundViewClass;
+(id)removeDictationCharacterInString:(id)arg1 ;
-(id)init;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CGSize)imageSize;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(id)keyCommands;
-(void)setBlurView:(SPUIHeaderBlurView *)arg1 ;
-(SPUIHeaderBlurView *)blurView;
-(void)setImageSize:(CGSize)arg1 ;
-(long long)activeInterfaceOrientation;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(UIView *)tintView;
-(void)setTintView:(UIView *)arg1 ;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(UIImage *)clearButtonImage;
-(void)updateToken:(id)arg1 ;
-(void)updateTextRange:(id)arg1 ;
-(SPSearchEntity *)searchEntity;
-(void)setClearButtonImage:(UIImage *)arg1 ;
-(void)setMicrophoneButton:(UIButton *)arg1 ;
-(CGRect)_microphoneRectForBounds:(CGRect)arg1 ;
-(CGRect)_shiftedBoundsForText:(CGRect)arg1 ;
-(void)setIgnoreTokensUpdate:(BOOL)arg1 ;
-(void)clearAllTokens;
-(void)escapeKeyCommand;
-(BOOL)needsLandscapeHeight;
-(id)textIncludingTokens;
-(void)updateWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 isOnDarkBackground:(BOOL)arg3 ;
-(UIButton *)microphoneButton;
-(NSString *)lastSearchText;
-(void)setLastSearchText:(NSString *)arg1 ;
-(SPSearchEntity *)lastSearchEntity;
-(void)setLastSearchEntity:(SPSearchEntity *)arg1 ;
-(BOOL)ignoreTokensUpdate;
@end

