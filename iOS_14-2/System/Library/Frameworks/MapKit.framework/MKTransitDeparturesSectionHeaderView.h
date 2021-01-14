/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, UIStackView, NSTimer, UIActivityIndicatorView, NSLayoutConstraint, MKButtonWithTargetArgument, NSString;

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorTableViewCell {

	unsigned long long _type;
	BOOL _extraSpacing;
	_MKUILabel* _label;
	UIStackView* _updatingView;
	_MKUILabel* _updatingLabel;
	NSTimer* _updatingLabelTimestampRefreshTimer;
	NSTimer* _updatingViewRefreshTimer;
	UIActivityIndicatorView* _updatingSpinner;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
+(id)_font:(unsigned long long)arg1 ;
+(id)_buttonFont:(unsigned long long)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(MKButtonWithTargetArgument *)button;
-(void)tintColorDidChange;
-(void)setText:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 extraSpacing:(BOOL)arg2 reuseIdentifier:(id)arg3 ;
-(NSString *)text;
-(id)initWithType:(unsigned long long)arg1 extraSpacing:(BOOL)arg2 ;
-(void)_updateConstraintValues;
-(void)dealloc;
@end

