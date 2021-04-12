/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKMapServiceCuratedCollectionTicket, MKMapServiceCuratedCollectionItemsTicket;
@class MKMapItemIdentifier;

@interface MKPlaceCuratedCollectionRefiner : NSObject {

	MKMapItemIdentifier* _collectionIdentifier;
	id<MKMapServiceCuratedCollectionTicket> _identifierRefinementTicket;
	id<MKMapServiceCuratedCollectionItemsTicket> _mapItemRefinementTicket;

}
-(id)initWithCollectionIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2 ;
-(void)_resolveMapItemsWithCollection:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCollectionIdentifier:(unsigned long long)arg1 ;
@end

