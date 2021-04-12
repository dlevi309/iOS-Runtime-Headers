/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval, NSArray;

@interface SPCommandKeysCriteria : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _sequence;
	NSDateInterval* _dateInterval;
	NSArray* _indices;
	NSNumber* _index;
	NSNumber* _hint;

}

@property (nonatomic,copy) NSNumber * sequence;                        //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy) NSArray * indices;                          //@synthesize indices=_indices - In the implementation block
@property (nonatomic,copy) NSNumber * index;                           //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSNumber * hint;                            //@synthesize hint=_hint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)matchSequence:(unsigned char)arg1 index:(unsigned)arg2 hint:(unsigned char)arg3 ;
+(id)matchDateInterval:(id)arg1 ;
+(id)matchPrimaryIndices:(id)arg1 ;
+(id)matchSecondaryIndex:(unsigned long long)arg1 hint:(unsigned char)arg2 ;
+(id)driftModeledCriteria;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)index;
-(void)setSequence:(NSNumber *)arg1 ;
-(NSNumber *)sequence;
-(NSDateInterval *)dateInterval;
-(void)setIndex:(NSNumber *)arg1 ;
-(NSArray *)indices;
-(void)setIndices:(NSArray *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSNumber *)hint;
-(void)setHint:(NSNumber *)arg1 ;
-(id)initWithDateInterval:(id)arg1 sequence:(id)arg2 indices:(id)arg3 index:(id)arg4 hint:(id)arg5 ;
@end

