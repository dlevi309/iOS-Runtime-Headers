/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@protocol GEOMapServiceTicket, OS_dispatch_queue;
@class NSObject, CLSilo;

@interface CLGeocoderInternal : NSObject {

	/*^block*/id _geocodeCompletionHandler;
	id<GEOMapServiceTicket> _ticket;
	NSObject*<OS_dispatch_queue> _queue;
	CLSilo* _responseSilo;

}

@property (retain) CLSilo * responseSilo;              //@synthesize responseSilo=_responseSilo - In the implementation block
-(id)init;
-(void)setResponseSilo:(CLSilo *)arg1 ;
-(CLSilo *)responseSilo;
-(void)dealloc;
@end

