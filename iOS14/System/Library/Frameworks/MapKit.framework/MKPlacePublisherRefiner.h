/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKMapServicePublisherViewTicket;
@class MKMapItemIdentifier;

@interface MKPlacePublisherRefiner : NSObject {

	MKMapItemIdentifier* _publisherIdentifier;
	id<MKMapServicePublisherViewTicket> _ticket;

}
-(void)fetchWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPublisherIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2 ;
-(id)initWithPublisherIdentifier:(unsigned long long)arg1 ;
@end

