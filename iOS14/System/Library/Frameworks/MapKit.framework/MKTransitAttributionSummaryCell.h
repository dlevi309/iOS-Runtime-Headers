/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _attributionLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * attributionSummary; 
-(void)_contentSizeCategoryDidChange;
-(void)tintColorDidChange;
-(id)_moreString;
-(NSString *)attributionSummary;
-(void)_updateConstraintValues;
-(void)setAttributionSummary:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

