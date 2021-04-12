/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosGridCell.h>

@class UILabel, UIColor, NSString;

@interface PUCurationTripKeyAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {

	UILabel* _curationScoreLabel;
	UILabel* _aestheticScoreLabel;
	UILabel* _promotionScoreLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	double _curationScore;
	double _aestheticScore;
	double _promotionScore;
	UIColor* _color;
	NSString* _title;
	NSString* _subtitle;

}

@property (assign,nonatomic) double curationScore;               //@synthesize curationScore=_curationScore - In the implementation block
@property (assign,nonatomic) double aestheticScore;              //@synthesize aestheticScore=_aestheticScore - In the implementation block
@property (assign,nonatomic) double promotionScore;              //@synthesize promotionScore=_promotionScore - In the implementation block
@property (nonatomic,copy) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
-(UIColor *)color;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCurationScore:(double)arg1 ;
-(double)curationScore;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(void)setAestheticScore:(double)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(double)aestheticScore;
-(NSString *)title;
@end

