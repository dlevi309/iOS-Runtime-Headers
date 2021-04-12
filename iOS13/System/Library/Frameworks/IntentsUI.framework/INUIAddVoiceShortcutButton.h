/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <UIKit/UIDragInteractionDelegate.h>

@protocol INUIAddVoiceShortcutButtonDelegate;
@class INShortcut, INVoiceShortcut, CAFilter, UIImageView, UILabel, NSLayoutConstraint, NSString;

@interface INUIAddVoiceShortcutButton : UIButton <UIDragInteractionDelegate> {

	unsigned long long _style;
	id<INUIAddVoiceShortcutButtonDelegate> _delegate;
	INShortcut* _shortcut;
	double _cornerRadius;
	INVoiceShortcut* _voiceShortcut;
	CAFilter* _highlightFilter;
	UIImageView* _sphiriImageView;
	UIImageView* _checkmarkImageView;
	UILabel* _addToSiriLabel;
	UILabel* _phraseLabel;
	NSLayoutConstraint* _checkmarkHeightConstraint;
	NSLayoutConstraint* _addToSiriLeadingConstraint;
	NSLayoutConstraint* _addedToSiriLeadingConstraint;

}

@property (nonatomic,retain) INVoiceShortcut * voiceShortcut;                                     //@synthesize voiceShortcut=_voiceShortcut - In the implementation block
@property (nonatomic,retain) CAFilter * highlightFilter;                                          //@synthesize highlightFilter=_highlightFilter - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * sphiriImageView;                                //@synthesize sphiriImageView=_sphiriImageView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * checkmarkImageView;                             //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * addToSiriLabel;                                     //@synthesize addToSiriLabel=_addToSiriLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * phraseLabel;                                        //@synthesize phraseLabel=_phraseLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * checkmarkHeightConstraint;                      //@synthesize checkmarkHeightConstraint=_checkmarkHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * addToSiriLeadingConstraint;                     //@synthesize addToSiriLeadingConstraint=_addToSiriLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * addedToSiriLeadingConstraint;                   //@synthesize addedToSiriLeadingConstraint=_addedToSiriLeadingConstraint - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<INUIAddVoiceShortcutButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) INShortcut * shortcut;                                               //@synthesize shortcut=_shortcut - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<INUIAddVoiceShortcutButtonDelegate>)delegate;
-(void)setDelegate:(id<INUIAddVoiceShortcutButtonDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)accessibilityLabel;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)_configureWithStyle:(unsigned long long)arg1 ;
-(double)cornerRadius;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_updateColors;
-(void)prepareForInterfaceBuilder;
-(INShortcut *)shortcut;
-(void)setShortcut:(INShortcut *)arg1 ;
-(void)_didTapButton;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(void)setVoiceShortcut:(INVoiceShortcut *)arg1 ;
-(id)_backgroundColorForStyle:(unsigned long long)arg1 ;
-(id)_textColorForStyle:(unsigned long long)arg1 ;
-(id)_strokeColorForStyle:(unsigned long long)arg1 ;
-(double)_strokeWidthForStyle:(unsigned long long)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(id)_addToSiriText;
-(id)_addedToSiriText;
-(id)_phraseText;
-(id)_addToSiriFont;
-(id)_phraseFont;
-(BOOL)_shouldUseLargerFont;
-(id)_sphiriImage;
-(id)_dynamicWhiteColor;
-(id)_dynamicBlackColor;
-(id)_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 ;
-(void)_updateContent;
-(void)_updatePhraseVisibility;
-(void)_checkAndUpdateForShortcut;
-(void)_handleVoiceShortcutUpdateNotification:(id)arg1 ;
-(INVoiceShortcut *)voiceShortcut;
-(CAFilter *)highlightFilter;
-(void)setHighlightFilter:(CAFilter *)arg1 ;
-(UIImageView *)sphiriImageView;
-(void)setSphiriImageView:(UIImageView *)arg1 ;
-(UILabel *)addToSiriLabel;
-(void)setAddToSiriLabel:(UILabel *)arg1 ;
-(UILabel *)phraseLabel;
-(void)setPhraseLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)checkmarkHeightConstraint;
-(void)setCheckmarkHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)addToSiriLeadingConstraint;
-(void)setAddToSiriLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)addedToSiriLeadingConstraint;
-(void)setAddedToSiriLeadingConstraint:(NSLayoutConstraint *)arg1 ;
@end

