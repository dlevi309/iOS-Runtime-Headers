/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIClientContext, SKUIColorScheme, NSArray, UILabel, UIButton, UIImageView, UIView, UIControl;

@interface SKUIReviewsFacebookView : UIView {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	NSArray* _friendNames;
	UILabel* _friendsLabel;
	UIButton* _likeButton;
	UIImageView* _logoImageView;
	UILabel* _titleLabel;
	BOOL _userLiked;
	UIView* _separatorView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSArray * friendNames;                            //@synthesize friendNames=_friendNames - In the implementation block
@property (nonatomic,readonly) UIControl * likeToggleButton;                 //@synthesize likeButton=_likeButton - In the implementation block
@property (assign,getter=isUserLiked,nonatomic) BOOL userLiked;              //@synthesize userLiked=_userLiked - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)_reloadFriendNamesLabel;
-(void)_reloadLikeButtonState;
-(id)_composedStringForNames:(id)arg1 userLiked:(BOOL)arg2 ;
-(void)setFriendNames:(NSArray *)arg1 ;
-(void)setUserLiked:(BOOL)arg1 ;
-(NSArray *)friendNames;
-(UIControl *)likeToggleButton;
-(BOOL)isUserLiked;
@end

