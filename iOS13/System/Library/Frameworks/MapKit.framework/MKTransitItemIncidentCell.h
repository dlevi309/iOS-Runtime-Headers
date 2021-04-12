/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UIImageView, NSArray, _MKUILabel, MKTransitIncidentItemCellBackgroundView, NSLayoutConstraint;

@interface MKTransitItemIncidentCell : MKCustomSeparatorTableViewCell {

	UIImageView* _incidentIconImageView;
	BOOL _needsConstraintsRebuild;
	NSArray* _constraints;
	_MKUILabel* _titleLabel;
	_MKUILabel* _lastUpdatedLabel;
	MKTransitIncidentItemCellBackgroundView* _backgroundView;
	BOOL _incidentIsBlocking;
	BOOL _useCondensedWidthLayout;
	NSLayoutConstraint* _titleLabelToTopConstraint;
	NSLayoutConstraint* _bottomToLabelConstraint;
	NSLayoutConstraint* _lastUpdatedToTitleBaselineConstraint;
	NSLayoutConstraint* _titleToLastUpdatedLabelConstraint;
	NSLayoutConstraint* _bottomToBackgroundConstraint;
	BOOL _padBottom;

}

@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom;                  //@synthesize padBottom=_padBottom - In the implementation block
-(void)dealloc;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)infoCardThemeChanged;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)configureViews;
-(void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(BOOL)arg4 shouldShowImage:(BOOL)arg5 inSiri:(BOOL)arg6 ;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(id)_blockingImage;
-(id)_nonBlockingImage;
-(double)_leadingMargin;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(void)_updateBottomConstraints;
-(BOOL)padBottom;
-(void)rebuildConstraints;
-(double)_trailingMargin;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)setPadBottom:(BOOL)arg1 ;
@end

