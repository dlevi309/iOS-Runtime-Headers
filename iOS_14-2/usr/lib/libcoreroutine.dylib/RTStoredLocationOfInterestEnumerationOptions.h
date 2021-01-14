/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval;

@interface RTStoredLocationOfInterestEnumerationOptions : NSObject <NSCopying> {

	BOOL _ascendingVisitEntryDate;
	BOOL _singleVisit;
	unsigned long long _batchSize;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) BOOL ascendingVisitEntryDate;                    //@synthesize ascendingVisitEntryDate=_ascendingVisitEntryDate - In the implementation block
@property (nonatomic,readonly) unsigned long long batchSize;                    //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL singleVisit;                                //@synthesize singleVisit=_singleVisit - In the implementation block
-(NSDateInterval *)dateInterval;
-(unsigned long long)batchSize;
-(id)init;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAscendingVisitEntryDate:(BOOL)arg1 batchSize:(unsigned long long)arg2 dateInterval:(id)arg3 singleVisit:(BOOL)arg4 ;
-(BOOL)singleVisit;
-(BOOL)ascendingVisitEntryDate;
@end

