/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKInfoCardAnalyticsDelegate;
@class NSArray, MKMapItem, NSAttributedString, MKPlaceAttributionCell, _MKMapItemAttribution, NSString;

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, MKModuleViewControllerProtocol> {

	BOOL _resizableViewsDisabled;
	NSArray* _urlStrings;
	MKMapItem* _mapItem;
	NSAttributedString* _attributionString;
	MKPlaceAttributionCell* _attributionCell;
	_MKMapItemAttribution* _attribution;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) MKPlaceAttributionCell * attributionCell;                               //@synthesize attributionCell=_attributionCell - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributionString;                                   //@synthesize attributionString=_attributionString - In the implementation block
@property (nonatomic,retain) _MKMapItemAttribution * attribution;                                    //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy) NSArray * urlStrings;                                                     //@synthesize urlStrings=_urlStrings - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                            //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(_MKMapItemAttribution *)attribution;
-(void)setAttribution:(_MKMapItemAttribution *)arg1 ;
-(void)infoCardThemeChanged;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(NSAttributedString *)attributionString;
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)setUrlStrings:(NSArray *)arg1 ;
-(NSArray *)urlStrings;
-(void)openURL;
-(void)updateLogo;
-(id)infoAttributionString;
-(MKPlaceAttributionCell *)attributionCell;
-(void)setAttributionCell:(MKPlaceAttributionCell *)arg1 ;
@end

