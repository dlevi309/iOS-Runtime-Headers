/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface HealthExperienceUI.HostViewCell : UICollectionViewCell {

	 hostView;
	 recreateViewControllerOnHostedFeedItemChange;
	 item;

}

@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL selected; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

