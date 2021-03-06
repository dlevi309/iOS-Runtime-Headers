/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKOfflineModeViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceActionManagerProtocol, _MKPlaceItem;
@class NSMutableArray, UILongPressGestureRecognizer, MKPlaceSectionRowView, MKMapItem, NSString;

@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKOfflineModeViewController, UIGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	NSMutableArray* _rows;
	UILongPressGestureRecognizer* _longPressRecognizer;
	MKPlaceSectionRowView* _selectedRow;
	BOOL _offlineMode;
	BOOL _bottomHairlineHidden;
	unsigned long long _placecardOptions;
	MKMapItem* _mapItem;
	id<MKPlaceActionManagerProtocol> _actionDelegate;
	id<_MKPlaceItem> _placeItem;

}

@property (nonatomic,retain) id<_MKPlaceItem> placeItem;                                          //@synthesize placeItem=_placeItem - In the implementation block
@property (assign,nonatomic) BOOL bottomHairlineHidden;                                           //@synthesize bottomHairlineHidden=_bottomHairlineHidden - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (assign,nonatomic) unsigned long long placecardOptions;                                 //@synthesize placecardOptions=_placecardOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                 //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceActionManagerProtocol> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic) BOOL offlineMode;                                                    //@synthesize offlineMode=_offlineMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contact;
-(id)initWithPlaceItem:(id)arg1 ;
-(BOOL)hasContent;
-(id<MKPlaceActionManagerProtocol>)actionDelegate;
-(void)setPlacecardOptions:(unsigned long long)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)_canShowWhileLocked;
-(void)setActionDelegate:(id<MKPlaceActionManagerProtocol>)arg1 ;
-(void)viewDidLoad;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(BOOL)offlineMode;
-(void)_menuDismissed:(id)arg1 ;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setOfflineMode:(BOOL)arg1 ;
-(void)_rowLongPressed:(id)arg1 ;
-(void)_updateViewsAnimated:(BOOL)arg1 ;
-(unsigned long long)actionTypeFromRowType:(unsigned long long)arg1 ;
-(unsigned long long)placecardOptions;
-(id)_addRowForType:(unsigned long long)arg1 withValue:(id)arg2 toViews:(id)arg3 ;
-(void)_addContactRow:(id)arg1 ofType:(unsigned long long)arg2 toViews:(id)arg3 defaultTitle:(id)arg4 ;
-(BOOL)shouldShowDetails;
-(BOOL)_shouldShowSuggestAnEdit;
-(id)_createViewForInfoRow:(unsigned long long)arg1 ;
-(void)_configureRow:(id)arg1 ofType:(unsigned long long)arg2 withValue:(id)arg3 ;
-(void)_shareAddress:(id)arg1 fromView:(id)arg2 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3 ;
-(BOOL)bottomHairlineHidden;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
-(id)draggableContent;
@end

