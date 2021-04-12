/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTEnumerationOptions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, NSNumber, NSDateInterval;

@interface RTStoredHintEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {

	unsigned long long _batchSize;
	BOOL _ascending;
	RTLocation* _referenceLocation;
	NSNumber* _sourceFilter;
	NSDateInterval* _dateInterval;
	unsigned long long _limit;

}

@property (nonatomic,readonly) BOOL ascending;                              //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) RTLocation * referenceLocation;              //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) NSNumber * sourceFilter;                     //@synthesize sourceFilter=_sourceFilter - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;               //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(NSNumber *)sourceFilter;
-(unsigned long long)limit;
-(unsigned long long)batchSize;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)enumeratedType;
-(id)description;
-(id)initWithReferenceLocation:(id)arg1 ascending:(BOOL)arg2 dateInterval:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(BOOL)ascending;
-(unsigned long long)hash;
-(RTLocation *)referenceLocation;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithReferenceLocation:(id)arg1 sourceFilter:(id)arg2 ascending:(BOOL)arg3 dateInterval:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

