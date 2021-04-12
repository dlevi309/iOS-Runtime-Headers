/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setSelected:(BOOL)arg1 ;
@end

