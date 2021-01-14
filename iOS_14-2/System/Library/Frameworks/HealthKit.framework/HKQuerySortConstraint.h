/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSortDescriptor, NSComparisonPredicate;

@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding> {

	NSSortDescriptor* _sortDescriptor;
	NSComparisonPredicate* _predicate;

}

@property (nonatomic,copy,readonly) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSComparisonPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortConstraintWithSortDescriptor:(id)arg1 predicate:(id)arg2 ;
+(id)sortConstraintByRelaxingSortConstraint:(id)arg1 error:(id*)arg2 ;
-(NSComparisonPredicate *)predicate;
-(id)init;
-(BOOL)canRelax;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSortDescriptor:(id)arg1 predicate:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSortDescriptor *)sortDescriptor;
-(BOOL)isEqual:(id)arg1 ;
@end

