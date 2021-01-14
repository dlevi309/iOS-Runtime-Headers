/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapServiceFeedbackReportTicket.h>

@protocol GEOMapServiceFeedbackReportTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKFeedbackReportTicket : NSObject <MKMapServiceFeedbackReportTicket> {

	id<GEOMapServiceFeedbackReportTicket> _ticket;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOMapServiceTraits *)traits;
-(void)submitWithCallbackQueue:(id)arg1 handler:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)cancel;
-(id)initWithFeedbackReportTicket:(id)arg1 ;
@end

