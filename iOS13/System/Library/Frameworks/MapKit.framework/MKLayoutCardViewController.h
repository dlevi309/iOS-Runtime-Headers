/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKStackingViewController.h>

@class MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController : MKStackingViewController {

	MKMapItem* _mapItem;
	NSMutableDictionary* _cacheVC;
	NSMutableDictionary* _cacheModuleType;

}

@property (nonatomic,retain) NSMutableDictionary * cacheVC;                      //@synthesize cacheVC=_cacheVC - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheModuleType;              //@synthesize cacheModuleType=_cacheModuleType - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                //@synthesize mapItem=_mapItem - In the implementation block
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)isLayoutDynamic;
-(void)_createModuleLayout:(id)arg1 ;
-(BOOL)isTransitItem;
-(id)_createViewControllerForModule:(id)arg1 ;
-(id)_layoutModuleForMapItem;
-(void)setCacheVC:(NSMutableDictionary *)arg1 ;
-(void)setCacheModuleType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cacheVC;
-(NSMutableDictionary *)cacheModuleType;
-(id)_cachedViewControllerForModule:(int)arg1 ;
@end

