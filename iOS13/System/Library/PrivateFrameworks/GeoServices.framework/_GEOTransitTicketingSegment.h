/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitTicketingSegmentInfo.h>

@class NSString, GEOTransitTicketingSegment;

@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo> {

	GEOTransitTicketingSegment* _segment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * ticketingUrl; 
@property (nonatomic,readonly) NSString * segmentName; 
-(NSString *)ticketingUrl;
-(NSString *)segmentName;
-(id)initWithSegment:(id)arg1 ;
@end

