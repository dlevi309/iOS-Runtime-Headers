/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)tintColorDidChange;
-(void)_updateTintColor;
-(void)_contentSizeDidChange;
-(_MKPlaceReservationInfo *)reservationInfo;
-(id)initWithReservationInfo:(id)arg1 ;
-(id)_newButtonForAttribution:(BOOL)arg1 ;
-(id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(BOOL)arg2 ;
-(void)_actionMakeReservation;
-(void)_setupImmutableConstraints;
-(void)_updateWithReservationInfo;
-(unsigned long long)selectedTimeIndex;
-(void)setSelectedTimeIndex:(unsigned long long)arg1 ;
-(id)_buttonFontLarge;
-(id)_buttonFontSmall;
-(void)_updateMutableConstraints;
-(double)_buttonBottomMargin;
-(double)_buttonTopMargin;
-(void)_updateButtonTitleAttributes;
-(NSString *)selectedTimeString;
-(void)setSelectedTimeString:(NSString *)arg1 ;
@end

