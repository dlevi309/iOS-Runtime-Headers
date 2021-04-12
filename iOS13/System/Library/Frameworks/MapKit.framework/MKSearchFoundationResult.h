/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class NSData, MKMapItem, MKSearchFoundationRichText, NSArray, NSBundle, NSString, MKLocationManager, MKSearchFoundationBusinessHoursAndDistanceRichText, NSMutableArray, SFText, SFImage, SFActionItem;

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {

	BOOL _optionSmallerScreen;
	NSData* _mapsData;
	MKMapItem* _mapItem;
	MKSearchFoundationRichText* _secondLineDisplayedText;
	NSArray* _descriptions;
	MKSearchFoundationRichText* _thirdLineDisplayedText;
	unsigned long long _iconSize;
	unsigned long long _mksfResultType;
	NSBundle* _bundle;
	NSString* _bundleID;
	MKLocationManager* _locationManager;
	MKSearchFoundationBusinessHoursAndDistanceRichText* _fourthLineDisplayedText;
	NSMutableArray* _fourthLineText;
	id _attributionObserver;
	SFText* _title;
	SFImage* _thumbnail;
	SFActionItem* _action;

}

@property (nonatomic,retain) NSData * mapsData;                                                                         //@synthesize mapsData=_mapsData - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) unsigned long long iconSize;                                                               //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) unsigned long long mksfResultType;                                                         //@synthesize mksfResultType=_mksfResultType - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                                                         //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) MKLocationManager * locationManager;                                                       //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) MKSearchFoundationRichText * secondLineDisplayedText;                                      //@synthesize secondLineDisplayedText=_secondLineDisplayedText - In the implementation block
@property (nonatomic,retain) MKSearchFoundationRichText * thirdLineDisplayedText;                                       //@synthesize thirdLineDisplayedText=_thirdLineDisplayedText - In the implementation block
@property (nonatomic,retain) MKSearchFoundationBusinessHoursAndDistanceRichText * fourthLineDisplayedText;              //@synthesize fourthLineDisplayedText=_fourthLineDisplayedText - In the implementation block
@property (nonatomic,retain) NSMutableArray * fourthLineText;                                                           //@synthesize fourthLineText=_fourthLineText - In the implementation block
@property (assign,nonatomic) BOOL optionSmallerScreen;                                                                  //@synthesize optionSmallerScreen=_optionSmallerScreen - In the implementation block
@property (nonatomic,retain) id attributionObserver;                                                                    //@synthesize attributionObserver=_attributionObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styledStringFromStringArray:(id)arg1 ;
-(void)dealloc;
-(NSBundle *)bundle;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(id)action;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)_commonInit;
-(void)setAction:(id)arg1 ;
-(unsigned long long)iconSize;
-(void)setIconSize:(unsigned long long)arg1 ;
-(id)thumbnail;
-(void)setThumbnail:(id)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(NSData *)mapsData;
-(void)setMapsData:(NSData *)arg1 ;
-(id)descriptions;
-(void)setDescriptions:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(BOOL)_isSmallerScreen;
-(id)_defaultRichTextItems;
-(id)_businessCategory;
-(id)_businessPriceAndReviewText;
-(id)_businessAddress;
-(id)_brandURL;
-(id)_businessHoursAndDistance;
-(void)_locationApprovalDidChange;
-(id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3 ;
-(id)_localizedMessageBusinessHours;
-(MKSearchFoundationRichText *)secondLineDisplayedText;
-(void)setSecondLineDisplayedText:(MKSearchFoundationRichText *)arg1 ;
-(MKSearchFoundationRichText *)thirdLineDisplayedText;
-(void)setThirdLineDisplayedText:(MKSearchFoundationRichText *)arg1 ;
-(unsigned long long)mksfResultType;
-(void)setMksfResultType:(unsigned long long)arg1 ;
-(MKLocationManager *)locationManager;
-(void)setLocationManager:(MKLocationManager *)arg1 ;
-(MKSearchFoundationBusinessHoursAndDistanceRichText *)fourthLineDisplayedText;
-(void)setFourthLineDisplayedText:(MKSearchFoundationBusinessHoursAndDistanceRichText *)arg1 ;
-(NSMutableArray *)fourthLineText;
-(void)setFourthLineText:(NSMutableArray *)arg1 ;
-(BOOL)optionSmallerScreen;
-(void)setOptionSmallerScreen:(BOOL)arg1 ;
-(id)attributionObserver;
-(void)setAttributionObserver:(id)arg1 ;
@end

