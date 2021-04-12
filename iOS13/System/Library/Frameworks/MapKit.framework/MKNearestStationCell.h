/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)didMoveToWindow;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)configureWithNearestStation:(id)arg1 ;
@end

