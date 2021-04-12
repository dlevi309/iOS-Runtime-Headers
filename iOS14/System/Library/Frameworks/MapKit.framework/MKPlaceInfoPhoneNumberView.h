/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_valueString;
-(int)analyticsTarget;
-(Class)_labeledValueExpectedValueType;
-(id)_iconAccessibilityLabel;
-(id)formatPhoneNumber:(id)arg1 ;
-(void)setOptsOutOfAds:(BOOL)arg1 ;
-(BOOL)optsOutOfAds;
-(id)draggableContent;
@end

