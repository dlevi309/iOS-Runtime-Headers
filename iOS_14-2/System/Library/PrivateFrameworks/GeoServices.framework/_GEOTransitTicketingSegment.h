/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitTicketingSegmentInfo.h>

@class NSString, GEOTransitTicketingSegment;

@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo> {

	GEOTransitTicketingSegment* _segment;

}

@property (nonatomic,readonly) NSString * ticketingUrl; 
@property (nonatomic,readonly) NSString * segmentName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)segmentName;
-(NSString *)ticketingUrl;
-(id)initWithSegment:(id)arg1 ;
@end

