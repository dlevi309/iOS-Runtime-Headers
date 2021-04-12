/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class GEOMapServiceTraits;


@protocol MKMapServiceCuratedCollectionItemsTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(GEOMapServiceTraits *)traits;
-(void)submitWithCallbackQueue:(id)arg1 handler:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)cancel;

@end

