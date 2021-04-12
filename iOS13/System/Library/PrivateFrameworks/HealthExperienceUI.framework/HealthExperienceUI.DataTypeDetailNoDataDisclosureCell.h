/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIImageView;

@interface HealthExperienceUI.DataTypeDetailNoDataDisclosureCell : UICollectionViewCell {

	 mainTextLabel;
	 disclosure;
	 item;

}

@property (assign,__weak,nonatomic) UILabel * mainTextLabel; 
@property (assign,__weak,nonatomic) UIImageView * disclosure; 
@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL selected; 
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)awakeFromNib;
-(UILabel *)mainTextLabel;
-(void)setMainTextLabel:(UILabel *)arg1 ;
-(UIImageView *)disclosure;
-(void)setDisclosure:(UIImageView *)arg1 ;
@end

