/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, SKUIClientContext, SKUIBadgeLabel, UIColor, UIImageView, NSString;

@interface SKUILockupMetadataView : UIView {

	UILabel* _artistNameLabel;
	UILabel* _categoryLabel;
	SKUIClientContext* _clientContext;
	SKUIBadgeLabel* _editorialBadgeLabel;
	UILabel* _itemCountLabel;
	UILabel* _itemOfferLabel;
	long long _numberOfUserRatings;
	UILabel* _releaseDateLabel;
	UIColor* _textColor;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	float _userRating;
	UIImageView* _userRatingImageView;
	UILabel* _userRatingLabel;
	unsigned long long _visibleFields;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields;               //@synthesize visibleFields=_visibleFields - In the implementation block
@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * editorialBadgeString; 
@property (nonatomic,copy) NSString * categoryString; 
@property (nonatomic,copy) NSString * itemCountString; 
@property (nonatomic,copy) NSString * itemOfferString; 
@property (nonatomic,copy) NSString * releaseDateString; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long numberOfUserRatings;                  //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating;                               //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,readonly) UIColor * primaryTextColor;                   //@synthesize textColor=_textColor - In the implementation block
+(double)maximumHeightWithVisibleFields:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(UIColor *)primaryTextColor;
-(long long)numberOfUserRatings;
-(NSString *)categoryString;
-(void)setItemCountString:(NSString *)arg1 ;
-(NSString *)releaseDateString;
-(void)setReleaseDateString:(NSString *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)_newDefaultLabel;
-(void)_reloadUserRatingViews;
-(id)_decimalNumberFormatter;
-(NSString *)editorialBadgeString;
-(NSString *)itemCountString;
-(NSString *)itemOfferString;
-(void)setEditorialBadgeString:(NSString *)arg1 ;
-(void)setCategoryString:(NSString *)arg1 ;
-(void)setItemOfferString:(NSString *)arg1 ;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
@end

