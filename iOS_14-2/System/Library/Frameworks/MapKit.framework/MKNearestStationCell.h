/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UITableViewCell.h>

@class _MKUILabel, MKTransitInfoLabelView, UIImageView, NSLayoutConstraint;

@interface MKNearestStationCell : UITableViewCell {

	_MKUILabel* _stationTitleLabel;
	MKTransitInfoLabelView* _stationInfoLabel;
	UIImageView* _stationImageView;
	NSLayoutConstraint* _stationLabelToImageViewConstraint;
	NSLayoutConstraint* _stationLabelToLeadingEdgeConstraint;
	NSLayoutConstraint* _stationLabelToTopConstraint;

}
-(void)_contentSizeCategoryDidChange;
-(void)configureWithNearestStation:(id)arg1 ;
-(void)didMoveToWindow;
-(void)_updateConstraintValues;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

