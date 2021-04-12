/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _distinctRanges;

}

@property (nonatomic,copy) NSMutableSet * distinctRanges;              //@synthesize distinctRanges=_distinctRanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)disjointRangeWithDistinctRanges:(id)arg1 ;
+(id)disjointRangeWithSingleRange:(id)arg1 ;
-(double)totalDuration;
-(BOOL)containsDate:(id)arg1 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(id)initWithDistinctRanges:(id)arg1 ;
-(NSMutableSet *)distinctRanges;
-(id)sortedDistinctRanges;
-(id)addDisjointRange:(id)arg1 ;
-(id)subtractDisjointRange:(id)arg1 ;
-(id)intersectionWithDisjointRange:(id)arg1 ;
-(void)setDistinctRanges:(NSMutableSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)description;
-(BOOL)containsRange:(id)arg1 ;
-(id)addRange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)subtractRange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

