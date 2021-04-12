/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTEnumerationOptions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {

	BOOL _ascending;
	BOOL _wrappedVisit;
	unsigned long long _batchSize;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;                 //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL wrappedVisit;                         //@synthesize wrappedVisit=_wrappedVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(unsigned long long)batchSize;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)enumeratedType;
-(/*^block*/id)processingBlock;
-(BOOL)wrappedVisit;
-(id)initWithAscending:(BOOL)arg1 batchSize:(unsigned long long)arg2 dateInterval:(id)arg3 wrappedVisit:(BOOL)arg4 ;
-(BOOL)ascending;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

