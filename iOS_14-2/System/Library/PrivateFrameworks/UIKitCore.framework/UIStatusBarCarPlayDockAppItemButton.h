/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLayoutConstraint, NSString, UIImageView;

@interface UIStatusBarCarPlayDockAppItemButton : UIButton <NSCopying> {

	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _widthConstraint;
	BOOL _active;
	BOOL _hasBadge;
	NSString* _bundleIdentifier;
	UIImageView* _iconImageView;
	UIImageView* _iconHighlightImageView;
	UIImageView* _badgeView;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                       //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                       //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * iconHighlightImageView;              //@synthesize iconHighlightImageView=_iconHighlightImageView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeView;                           //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) BOOL itemHasBundleIdentifier; 
@property (assign,nonatomic) BOOL hasBadge;                                     //@synthesize hasBadge=_hasBadge - In the implementation block
-(BOOL)canBecomeFocused;
-(UIImageView *)iconImageView;
-(float)charge;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIImageView *)badgeView;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasBadge;
-(void)setBadgeView:(UIImageView *)arg1 ;
-(BOOL)isActive;
-(NSString *)bundleIdentifier;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setCharge:(float)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setHasBadge:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(UIImageView *)iconHighlightImageView;
-(BOOL)shouldShowBadge;
-(BOOL)itemHasBundleIdentifier;
-(void)setBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setIconHighlightImageView:(UIImageView *)arg1 ;
@end

