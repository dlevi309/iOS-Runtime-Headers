/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSComparisonPredicate *)predicate;
-(NSSortDescriptor *)sortDescriptor;
-(id)initWithSortDescriptor:(id)arg1 predicate:(id)arg2 ;
-(BOOL)canRelax;
@end

