/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapServiceTransitLineTicket.h>

@protocol GEOMapServiceTransitLineTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKTransitLineTicket : NSObject <MKMapServiceTransitLineTicket> {

	id<GEOMapServiceTransitLineTicket> _ticket;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOMapServiceTraits *)traits;
-(id)initWithTicket:(id)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)cancel;
@end

