/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)predicate;
-(id)init;
-(BOOL)canRelax;
-(NSArray *)sortConstraints;
-(id)initWithSortConstraints:(id)arg1 objectID:(id)arg2 ;
-(id)querySortDescriptors;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCompatibleWithSortDescriptors:(id)arg1 ;
-(NSNumber *)objectID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

