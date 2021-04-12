/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(BOOL)containsRange:(id)arg1 ;
-(double)totalDuration;
-(id)addRange:(id)arg1 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(NSMutableSet *)distinctRanges;
-(id)subtractRange:(id)arg1 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)initWithDistinctRanges:(id)arg1 ;
-(id)sortedDistinctRanges;
-(id)addDisjointRange:(id)arg1 ;
-(id)subtractDisjointRange:(id)arg1 ;
-(id)intersectionWithDisjointRange:(id)arg1 ;
-(void)setDistinctRanges:(NSMutableSet *)arg1 ;
@end

