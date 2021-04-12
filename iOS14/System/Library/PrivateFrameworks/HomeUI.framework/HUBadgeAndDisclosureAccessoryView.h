/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UILabel;

@interface HUBadgeAndDisclosureAccessoryView : UIView {

	long long _badgeCount;
	UIView* _badgeContainerView;
	UIImageView* _badgeImageView;
	UILabel* _badgeLabel;
	UIImageView* _disclosureImageView;

}

@property (nonatomic,retain) UIView * badgeContainerView;                    //@synthesize badgeContainerView=_badgeContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeImageView;                   //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,retain) UILabel * badgeLabel;                           //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureImageView;              //@synthesize disclosureImageView=_disclosureImageView - In the implementation block
@property (assign,nonatomic) long long badgeCount;                           //@synthesize badgeCount=_badgeCount - In the implementation block
+(id)_disclosureImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)badgeCount;
-(UIView *)badgeContainerView;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
-(void)setBadgeContainerView:(UIView *)arg1 ;
-(UILabel *)badgeLabel;
-(void)setBadgeCount:(long long)arg1 ;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(UIImageView *)disclosureImageView;
-(void)setDisclosureImageView:(UIImageView *)arg1 ;
@end

