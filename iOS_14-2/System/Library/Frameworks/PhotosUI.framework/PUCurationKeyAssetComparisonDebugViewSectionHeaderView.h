/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, NSString;

@interface PUCurationKeyAssetComparisonDebugViewSectionHeaderView : UICollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

