/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTransitTimeRange.h>

@class NSDate, NSString;

@interface _GEOTimeRange : NSObject <GEOTransitTimeRange> {

	GEOPBTransitTimeRange _pbTimeRange;
	GEOPDTimeRange _pdTimeRange;
	BOOL _usePB;

}

@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BOOL)contains:(id)arg1 ;
-(double)duration;
-(double)startTime;
-(id)initWithPDTimeRange:(GEOPDTimeRange)arg1 ;
-(id)initWithPBTimeRange:(GEOPBTransitTimeRange)arg1 ;
@end

