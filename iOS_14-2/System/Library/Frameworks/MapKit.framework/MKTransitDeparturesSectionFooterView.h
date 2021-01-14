/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class NSLayoutConstraint, MKButtonWithTargetArgument;

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorTableViewCell {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
+(double)defaultHeight;
+(id)_font;
-(void)_contentSizeCategoryDidChange;
-(MKButtonWithTargetArgument *)button;
-(void)tintColorDidChange;
-(void)_updateConstraintValues;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

