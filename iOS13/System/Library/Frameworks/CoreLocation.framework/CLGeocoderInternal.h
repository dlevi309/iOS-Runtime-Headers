/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CLSilo *)responseSilo;
-(void)setResponseSilo:(CLSilo *)arg1 ;
@end

