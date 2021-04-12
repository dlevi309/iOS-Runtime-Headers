/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
-(id)snapshot;
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_updateMap;
-(long long)preferredUserInterfaceStyle;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(id)initWithMKMapItem:(id)arg1 ;
-(void)setUseWindowTrait:(BOOL)arg1 ;
-(void)_handleTapOnMap;
-(void)updateInlineMapWithRefinedMapItems;
-(void)_updateInlineMapWithRefinedMapItems;
-(NSArray *)visibleMapItems;
-(CGSize)_mapSize;
-(id)traitCollectionForSnapshot;
-(void)_updateSnapshotImage:(id)arg1 ;
-(void)_launchMaps;
-(BOOL)isBottomHairlineHidden;
-(BOOL)useWindowTrait;
-(MKMapCamera *)mapCamera;
-(void)setMapCamera:(MKMapCamera *)arg1 ;
@end

