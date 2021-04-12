/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapServiceProblemReportTicket.h>

@protocol GEOMapServiceProblemReportTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKProblemReportTicket : NSObject <MKMapServiceProblemReportTicket> {

	id<GEOMapServiceProblemReportTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(GEOMapServiceTraits *)traits;
-(id)initWithProblemReportTicket:(id)arg1 ;
@end

