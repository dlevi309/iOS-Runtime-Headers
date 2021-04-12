/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_createModuleLayout:(id)arg1 ;
-(BOOL)isTransitItem;
-(MKMapItem *)mapItem;
-(NSMutableDictionary *)cacheVC;
-(void)setCacheVC:(NSMutableDictionary *)arg1 ;
-(id)_layoutModuleForMapItem;
-(void)setCacheModuleType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cacheModuleType;
-(id)_cachedViewControllerForModule:(int)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)_createViewControllerForModule:(id)arg1 ;
-(BOOL)isLayoutDynamic;
@end

