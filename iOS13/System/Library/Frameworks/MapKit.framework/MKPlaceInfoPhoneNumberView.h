/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceInfoContactRowView.h>

@class _MKUILabel;

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {

	_MKUILabel* _optsOutOfAdsView;
	BOOL _optsOutOfAds;

}

@property (assign,nonatomic) BOOL optsOutOfAds;              //@synthesize optsOutOfAds=_optsOutOfAds - In the implementation block
-(id)_icon;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)draggableContent;
-(int)analyticsTarget;
-(id)_valueString;
-(Class)_labeledValueExpectedValueType;
-(id)_iconAccessibilityLabel;
-(id)formatPhoneNumber:(id)arg1 ;
-(void)setOptsOutOfAds:(BOOL)arg1 ;
-(BOOL)optsOutOfAds;
@end

