/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPControl.h>

@protocol TPPillViewDelegate;
@class TPBadgeView, UIStackView, UILabel, UITapGestureRecognizer, NSLayoutConstraint, NSString;

@interface TPPillView : TPControl {

	id<TPPillViewDelegate> _delegate;
	unsigned long long _theme;
	TPBadgeView* _badgeView;
	UIStackView* _stackView;
	UILabel* _textLabel;
	UITapGestureRecognizer* _gestureRecognizer;
	NSLayoutConstraint* _stackViewBottomAnchorLayoutConstraint;
	NSLayoutConstraint* _stackViewLeftAnchorLayoutConstraint;
	NSLayoutConstraint* _stackViewRightAnchorLayoutConstraint;
	NSLayoutConstraint* _stackViewTopAnchorLayoutConstraint;

}

@property (nonatomic,readonly) TPBadgeView * badgeView;                                               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                               //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                   //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * gestureRecognizer;                            //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewBottomAnchorLayoutConstraint;              //@synthesize stackViewBottomAnchorLayoutConstraint=_stackViewBottomAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewLeftAnchorLayoutConstraint;                //@synthesize stackViewLeftAnchorLayoutConstraint=_stackViewLeftAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewRightAnchorLayoutConstraint;               //@synthesize stackViewRightAnchorLayoutConstraint=_stackViewRightAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewTopAnchorLayoutConstraint;                 //@synthesize stackViewTopAnchorLayoutConstraint=_stackViewTopAnchorLayoutConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<TPPillViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * badgeText; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned long long theme;                                                //@synthesize theme=_theme - In the implementation block
-(UITapGestureRecognizer *)gestureRecognizer;
-(unsigned long long)theme;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(TPBadgeView *)badgeView;
-(void)loadConstraints;
-(id<TPPillViewDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(UIStackView *)stackView;
-(void)setTheme:(unsigned long long)arg1 ;
-(void)commonInit;
-(void)setDelegate:(id<TPPillViewDelegate>)arg1 ;
-(void)updateFonts;
-(void)handleTap:(id)arg1 ;
-(UILabel *)textLabel;
-(id)initWithTitle:(id)arg1 frame:(CGRect)arg2 theme:(unsigned long long)arg3 ;
-(void)setBadgeText:(NSString *)arg1 ;
-(void)updateTheme;
-(NSString *)title;
-(void)unloadConstraints;
-(NSLayoutConstraint *)stackViewLeftAnchorLayoutConstraint;
-(void)setStackViewLeftAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewRightAnchorLayoutConstraint;
-(void)setStackViewRightAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewTopAnchorLayoutConstraint;
-(void)setStackViewTopAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewBottomAnchorLayoutConstraint;
-(void)setStackViewBottomAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithTitle:(id)arg1 frame:(CGRect)arg2 ;
-(NSString *)badgeText;
@end

