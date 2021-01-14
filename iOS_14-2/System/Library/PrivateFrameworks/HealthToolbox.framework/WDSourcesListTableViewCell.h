/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class HKSourceDataModel, UIImageView, UILabel;

@interface WDSourcesListTableViewCell : UITableViewCell {

	HKSourceDataModel* _sourceModel;
	UIImageView* _iconImage;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImage;
-(void)setSourceModel:(HKSourceDataModel *)arg1 ;
-(void)prepareForReuse;
-(void)setIconImage:(UIImageView *)arg1 ;
-(HKSourceDataModel *)sourceModel;
-(void)setupConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setUpSubviews;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 fetchError:(id)arg3 ;
@end

