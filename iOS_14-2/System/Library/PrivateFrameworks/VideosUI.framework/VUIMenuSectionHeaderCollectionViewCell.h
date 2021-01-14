/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, VUILabel;

@interface VUIMenuSectionHeaderCollectionViewCell : UICollectionViewCell {

	NSString* _title;
	VUILabel* _titleLabel;

}

@property (nonatomic,retain) VUILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
@end

