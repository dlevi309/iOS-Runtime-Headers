/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(BOOL)contains:(id)arg1 ;
-(double)startTime;
-(id)initWithPDTimeRange:(GEOPDTimeRange)arg1 ;
-(id)initWithPBTimeRange:(GEOPBTransitTimeRange)arg1 ;
@end

