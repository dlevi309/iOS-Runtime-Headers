/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSNumberFormatter, UIColor, NSMutableArray, _MKScaleUnitsView, UIView, NSMutableDictionary, NSString, NSNumber, MKMapView;

@interface MKScaleView : UIView {

	double _distanceInMeters;
	BOOL _useMetric;
	BOOL _useYardsForShortDistances;
	NSNumberFormatter* _floatNumberFormatter;
	double _magicNumbers[3];
	UIColor* _borderColorRegular;
	UIColor* _borderColorSatellite;
	NSMutableArray* _segments;
	NSMutableArray* _blurredSegments;
	_MKScaleUnitsView* _unitsView;
	long long _oldNumberOfSegments;
	UIView* _displayedOutline;
	UIView* _displayedWhiteOutline;
	double _segmentLengthInPixels;
	double _resultSegmentLength;
	double _resultSegmentLengthInMeters;
	NSMutableDictionary* _formattedNumberCache;
	NSString* _feetAbbreviation;
	NSString* _yardAbbreviation;
	NSString* _milesAbbreviation;
	NSString* _metersAbbreviation;
	NSString* _kilometersAbbreviation;
	long long _grQuality;
	int _layoutCounter;
	NSNumber* _useLightText;
	BOOL _isVisible;
	BOOL _usedInternallyByMapView;
	MKMapView* _mapView;
	long long _scaleVisibility;
	long long _legendAlignment;
	unsigned long long _mapType;

}

@property (assign,nonatomic) BOOL useLightText; 
@property (assign,nonatomic) double distanceInMeters; 
@property (assign,nonatomic) BOOL usedInternallyByMapView;              //@synthesize usedInternallyByMapView=_usedInternallyByMapView - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;                //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) long long scaleVisibility;                 //@synthesize scaleVisibility=_scaleVisibility - In the implementation block
@property (assign,nonatomic) long long legendAlignment;                 //@synthesize legendAlignment=_legendAlignment - In the implementation block
+(id)scaleViewWithMapView:(id)arg1 ;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUseLightText:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(unsigned long long)mapType;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(id)initWithMapView:(id)arg1 ;
-(void)setUsedInternallyByMapView:(BOOL)arg1 ;
-(void)setLegendAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)useLightText;
-(void)_updateStrings;
-(void)updateLocale:(id)arg1 ;
-(void)memoryWarning:(id)arg1 ;
-(id)_setupOutlineView;
-(BOOL)usedInternallyByMapView;
-(void)shouldUpdateScaleNotification:(id)arg1 ;
-(id)_setupSegmentView:(BOOL)arg1 ;
-(void)_localizedDistanceStringsWithMeters:(unsigned)arg1 imperial:(double)arg2 useFeet:(BOOL)arg3 inMetric:(BOOL)arg4 displaysYardsForShortDistances:(BOOL)arg5 strings:(id)arg6 ;
-(void)_calculateSegments;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_formattedStringForFloat:(double)arg1 ;
-(id)_scaleViewFormattedStringForFloat:(double)arg1 ;
-(id)_scaleViewFormattedStringForInteger:(long long)arg1 ;
-(void)setScaleVisibility:(long long)arg1 ;
-(long long)scaleVisibility;
-(long long)legendAlignment;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateVisibility;
-(MKMapView *)mapView;
-(void)setDistanceInMeters:(double)arg1 ;
-(void)dealloc;
@end

