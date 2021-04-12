/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView;

@interface _HKReportTableViewCell : UITableViewCell {

	double _minimumHeight;
	UILabel* _reportLabel;
	UIImageView* _reportImageView;

}

@property (nonatomic,readonly) double minimumHeight;                       //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,readonly) UILabel * reportLabel;                      //@synthesize reportLabel=_reportLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * reportImageView;              //@synthesize reportImageView=_reportImageView - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)minimumHeight;
-(id)initWithWidth:(double)arg1 minimumHeight:(double)arg2 ;
-(void)setReportName:(id)arg1 reportImage:(id)arg2 ;
-(void)_buildCellStructureWithWidth:(double)arg1 ;
-(UILabel *)reportLabel;
-(UIImageView *)reportImageView;
@end

