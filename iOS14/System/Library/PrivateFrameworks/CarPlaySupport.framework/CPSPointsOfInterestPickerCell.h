/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UITableViewCell.h>

@interface CPSPointsOfInterestPickerCell : UITableViewCell {

	BOOL _chosen;

}

@property (assign,nonatomic) BOOL chosen;              //@synthesize chosen=_chosen - In the implementation block
+(id)identifier;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)chosen;
-(void)setChosen:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setupViews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

