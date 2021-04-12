/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <WallpaperSettings/WallpaperSettings-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface PUPhotosPanoramaHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
@end

