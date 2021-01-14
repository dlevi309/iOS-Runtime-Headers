/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionRowView.h>

@class UISegmentedControl, UIButton, NSMutableArray, NSLayoutConstraint, _MKPlaceReservationInfo, NSString;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView {

	UISegmentedControl* _openTimesControl;
	UIButton* _buttonMakeReservation;
	UIButton* _buttonAttribution;
	NSMutableArray* _mutableConstraints;
	NSLayoutConstraint* _constraintButtonTopMargin;
	NSLayoutConstraint* _constraintButtonBottomMargin;
	_MKPlaceReservationInfo* _reservationInfo;

}

@property (nonatomic,readonly) _MKPlaceReservationInfo * reservationInfo;              //@synthesize reservationInfo=_reservationInfo - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTimeIndex; 
@property (nonatomic,retain) NSString * selectedTimeString; 
-(void)_updateTintColor;
-(void)tintColorDidChange;
-(_MKPlaceReservationInfo *)reservationInfo;
-(id)initWithReservationInfo:(id)arg1 ;
-(void)_contentSizeDidChange;
-(id)_newButtonForAttribution:(BOOL)arg1 ;
-(unsigned long long)selectedTimeIndex;
-(id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(BOOL)arg2 ;
-(void)_actionMakeReservation;
-(void)_setupImmutableConstraints;
-(void)_updateWithReservationInfo;
-(void)setSelectedTimeIndex:(unsigned long long)arg1 ;
-(id)_buttonFontLarge;
-(id)_buttonFontSmall;
-(double)_buttonBottomMargin;
-(void)_updateMutableConstraints;
-(double)_buttonTopMargin;
-(void)_updateButtonTitleAttributes;
-(NSString *)selectedTimeString;
-(void)setSelectedTimeString:(NSString *)arg1 ;
@end

