/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding> {

	BOOL _ascending;
	BOOL _labelVisit;
	NSNumber* _confidence;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;

}

@property (nonatomic,readonly) BOOL ascending;                         //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL labelVisit;                        //@synthesize labelVisit=_labelVisit - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                       //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(NSNumber *)confidence;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSNumber *)limit;
-(id)init;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToFetchOptions:(id)arg1 ;
-(id)description;
-(BOOL)ascending;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)labelVisit;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 labelVisit:(BOOL)arg4 limit:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

