/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPView.h>

@protocol TPPillViewDelegate;
@class TPBadgeView, UIStackView, UILabel, UITapGestureRecognizer, NSLayoutConstraint, NSString;

@interface TPPillView : TPView {

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
-(id<TPPillViewDelegate>)delegate;
-(void)setDelegate:(id<TPPillViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)commonInit;
-(UIStackView *)stackView;
-(UILabel *)textLabel;
-(UITapGestureRecognizer *)gestureRecognizer;
-(TPBadgeView *)badgeView;
-(void)handleTap:(id)arg1 ;
-(NSString *)badgeText;
-(void)setBadgeText:(NSString *)arg1 ;
-(void)updateFonts;
-(unsigned long long)theme;
-(void)setTheme:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 frame:(CGRect)arg2 theme:(unsigned long long)arg3 ;
-(void)updateTheme;
-(void)loadConstraints;
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
@end

