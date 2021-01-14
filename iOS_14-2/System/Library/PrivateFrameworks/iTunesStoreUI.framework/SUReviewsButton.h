/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUGradientButton.h>

@class UIImageView, NSString;

@interface SUReviewsButton : SUGradientButton {

	UIImageView* _disclosureView;
	float _userRating;
	long long _userRatingCount;
	NSString* _userRatingCountString;

}

@property (assign,nonatomic) float userRating;                              //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) long long userRatingCount;                     //@synthesize userRatingCount=_userRatingCount - In the implementation block
@property (nonatomic,retain) NSString * userRatingCountString;              //@synthesize userRatingCountString=_userRatingCountString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(float)userRating;
-(void)dealloc;
-(void)reloadView;
-(NSString *)userRatingCountString;
-(void)setUserRatingCount:(long long)arg1 ;
-(void)setUserRatingCountString:(NSString *)arg1 ;
-(long long)userRatingCount;
@end

