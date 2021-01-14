/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@protocol _UIButtonBarAppearanceDelegate;
@class UIView, UIImageView, UILabel, NSArray, NSMutableDictionary, NSLayoutConstraint;

@interface _UIButtonBarButtonVisualProviderCarPlay : _UIButtonBarButtonVisualProvider {

	id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
	UIView* _focusedView;
	UIImageView* _backView;
	UIImageView* _imageView;
	UILabel* _titleView;
	NSArray* _titleAlternatives;
	NSMutableDictionary* _titleAlterntativeLookup;
	NSArray* _buttonConstraints;
	NSLayoutConstraint* _maxTitleViewWidthConstraint;
	NSLayoutConstraint* _backViewToContentConstraint;

}

@property (assign,nonatomic,__weak) id<_UIButtonBarAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) UIView * focusedView;                                                      //@synthesize focusedView=_focusedView - In the implementation block
@property (nonatomic,retain) UIImageView * backView;                                                    //@synthesize backView=_backView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleView;                                                       //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSArray * titleAlternatives;                                               //@synthesize titleAlternatives=_titleAlternatives - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleAlterntativeLookup;                             //@synthesize titleAlterntativeLookup=_titleAlterntativeLookup - In the implementation block
@property (nonatomic,retain) NSArray * buttonConstraints;                                               //@synthesize buttonConstraints=_buttonConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * maxTitleViewWidthConstraint;                          //@synthesize maxTitleViewWidthConstraint=_maxTitleViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backViewToContentConstraint;                          //@synthesize backViewToContentConstraint=_backViewToContentConstraint - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(UILabel *)titleView;
-(UIImageView *)imageView;
-(BOOL)supportsBackButtons;
-(UIImageView *)backView;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(id)backIndicatorView;
-(void)setTitleView:(UILabel *)arg1 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)setAppearanceDelegate:(id<_UIButtonBarAppearanceDelegate>)arg1 ;
-(NSArray *)buttonConstraints;
-(void)setBackViewToContentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFocusedView:(UIView *)arg1 ;
-(void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(void)_setupAlternateTitlesFromBarButtonItem:(id)arg1 ;
-(NSArray *)titleAlternatives;
-(NSLayoutConstraint *)backViewToContentConstraint;
-(void)setButtonConstraints:(NSArray *)arg1 ;
-(NSMutableDictionary *)titleAlterntativeLookup;
-(void)setTitleAlternatives:(NSArray *)arg1 ;
-(void)setTitleAlterntativeLookup:(NSMutableDictionary *)arg1 ;
-(id)_titleAlternativeForTitle:(id)arg1 ;
-(NSLayoutConstraint *)maxTitleViewWidthConstraint;
-(void)setMaxTitleViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id<_UIButtonBarAppearanceDelegate>)appearanceDelegate;
-(UIView *)focusedView;
-(void)updateButton:(id)arg1 forFocusedState:(BOOL)arg2 ;
-(void)setBackView:(UIImageView *)arg1 ;
-(id)contentView;
-(void)_selectGestureChanged:(id)arg1 ;
@end

