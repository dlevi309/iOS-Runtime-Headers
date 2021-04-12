/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HKSortedQueryAnchor : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _objectID;
	NSArray* _sortConstraints;

}

@property (nonatomic,copy,readonly) NSNumber * objectID;                    //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortConstraints;              //@synthesize sortConstraints=_sortConstraints - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortConstraintsWithSortDescriptors:(id)arg1 sample:(id)arg2 ;
+(id)sortedQueryAnchorWithSortDescriptors:(id)arg1 ;
+(id)sortedQueryAnchorWithSortDescriptors:(id)arg1 includingSample:(id)arg2 objectID:(long long)arg3 ;
+(id)sortedQueryAnchorWithSortDescriptors:(id)arg1 followingSample:(id)arg2 objectID:(long long)arg3 ;
+(id)sortedQueryAnchorRelaxingConstraintsWithAnchor:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicate;
-(NSNumber *)objectID;
-(BOOL)canRelax;
-(id)initWithSortConstraints:(id)arg1 objectID:(id)arg2 ;
-(NSArray *)sortConstraints;
-(id)querySortDescriptors;
-(BOOL)isCompatibleWithSortDescriptors:(id)arg1 ;
@end

