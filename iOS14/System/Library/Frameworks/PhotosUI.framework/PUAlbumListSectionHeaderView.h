/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UIFont, UILabel, NSArray;

@interface PUAlbumListSectionHeaderView : UICollectionReusableView {

	NSString* _sectionHeaderTitle;
	UIFont* _sectionHeaderTitleFont;
	UILabel* __titleLabel;
	NSArray* __constraints;
	UIEdgeInsets _sectionHeaderInsets;

}

@property (nonatomic,readonly) UILabel * _titleLabel;                                     //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;              //@synthesize _constraints=__constraints - In the implementation block
@property (nonatomic,copy) NSString * sectionHeaderTitle;                                 //@synthesize sectionHeaderTitle=_sectionHeaderTitle - In the implementation block
@property (nonatomic,retain) UIFont * sectionHeaderTitleFont;                             //@synthesize sectionHeaderTitleFont=_sectionHeaderTitleFont - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionHeaderInsets;                            //@synthesize sectionHeaderInsets=_sectionHeaderInsets - In the implementation block
-(void)_setConstraints:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSectionHeaderInsets:(UIEdgeInsets)arg1 ;
-(void)setSectionHeaderTitle:(NSString *)arg1 ;
-(void)setSectionHeaderTitleFont:(UIFont *)arg1 ;
-(NSString *)sectionHeaderTitle;
-(UIEdgeInsets)sectionHeaderInsets;
-(UIFont *)sectionHeaderTitleFont;
-(void)layoutSubviews;
-(NSArray *)_constraints;
-(UILabel *)_titleLabel;
@end

