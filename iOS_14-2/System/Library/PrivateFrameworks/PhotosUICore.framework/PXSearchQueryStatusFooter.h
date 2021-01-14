/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface PXSearchQueryStatusFooter : UICollectionReusableView {

	UILabel* _titleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setSearchText:(id)arg1 ;
-(UILabel *)detailLabel;
@end

