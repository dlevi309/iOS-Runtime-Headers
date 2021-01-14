/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(void)_updateColors;
-(CGSize)intrinsicContentSize;
-(id<INUIAddVoiceShortcutButtonDelegate>)delegate;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(INShortcut *)shortcut;
-(double)cornerRadius;
-(void)setDelegate:(id<INUIAddVoiceShortcutButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setShortcut:(INShortcut *)arg1 ;
-(void)_updateContent;
-(void)prepareForInterfaceBuilder;
-(id)initWithCoder:(id)arg1 ;
-(void)_didTapButton;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)_configureWithStyle:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)style;
-(void)_createHighlightFilterIfNecessary;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setVoiceShortcut:(INVoiceShortcut *)arg1 ;
-(id)_backgroundColorForStyle:(unsigned long long)arg1 ;
-(id)_textColorForStyle:(unsigned long long)arg1 ;
-(id)_strokeColorForStyle:(unsigned long long)arg1 ;
-(double)_strokeWidthForStyle:(unsigned long long)arg1 ;
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

