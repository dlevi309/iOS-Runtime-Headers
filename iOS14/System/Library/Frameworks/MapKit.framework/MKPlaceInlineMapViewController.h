/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class _MKPlaceInlineMapContentView, MKMapItem, _MKPlaceViewController, MKMapCamera, NSArray, NSString;

@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol> {

	_MKPlaceInlineMapContentView* _contentView;
	MKMapItem* _updatingInlineMapItem;
	BOOL _bottomHairlineHidden;
	BOOL _useWindowTrait;
	MKMapItem* _mapItem;
	_MKPlaceViewController* _owner;
	MKMapCamera* _mapCamera;

}

@property (assign,nonatomic) BOOL useWindowTrait;                                                  //@synthesize useWindowTrait=_useWindowTrait - In the implementation block
@property (nonatomic,retain) MKMapCamera * mapCamera;                                              //@synthesize mapCamera=_mapCamera - In the implementation block
@property (nonatomic,readonly) NSArray * visibleMapItems; 
@property (nonatomic,retain) MKMapItem * mapItem;                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden;              //@synthesize bottomHairlineHidden=_bottomHairlineHidden - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(id)snapshot;
-(_MKPlaceViewController *)owner;
-(MKMapCamera *)mapCamera;
-(id)initWithMKMapItem:(id)arg1 ;
-(void)setUseWindowTrait:(BOOL)arg1 ;
-(void)_handleTapOnMap;
-(void)updateInlineMapWithRefinedMapItems;
-(void)_updateInlineMapWithRefinedMapItems;
-(NSArray *)visibleMapItems;
-(id)traitCollectionForSnapshot;
-(void)_updateSnapshotImage:(id)arg1 ;
-(void)_launchMaps;
-(BOOL)isBottomHairlineHidden;
-(BOOL)useWindowTrait;
-(void)setMapCamera:(MKMapCamera *)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_updateMap;
-(long long)preferredUserInterfaceStyle;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(CGSize)_mapSize;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)loadView;
@end

