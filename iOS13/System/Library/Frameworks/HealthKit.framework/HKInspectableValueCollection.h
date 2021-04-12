/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKInspectableValue, NSString;

@interface HKInspectableValueCollection : NSObject <NSSecureCoding, NSCopying> {

	long long _collectionType;
	NSArray* _collection;
	NSArray* _elementTags;

}

@property (nonatomic,readonly) NSArray * collection;                               //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSArray * elementTags;                              //@synthesize elementTags=_elementTags - In the implementation block
@property (nonatomic,readonly) long long collectionType;                           //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,readonly) HKInspectableValue * inspectableValue; 
@property (nonatomic,readonly) HKInspectableValue * min; 
@property (nonatomic,readonly) HKInspectableValue * max; 
@property (nonatomic,readonly) NSArray * inspectableValues; 
@property (nonatomic,readonly) NSString * unitString; 
+(BOOL)supportsSecureCoding;
+(id)inspectableValueCollectionRangeWithMin:(id)arg1 max:(id)arg2 ;
+(id)inspectableValueCollectionRangeWithMin:(id)arg1 ;
+(id)inspectableValueCollectionRangeWithMax:(id)arg1 ;
+(id)inspectableValueCollectionSingleWithValue:(id)arg1 ;
+(id)inspectableValueCollectionListWithValues:(id)arg1 ;
+(id)inspectableValueCollectionTaggedListWithValues:(id)arg1 tags:(id)arg2 ;
+(BOOL)hasNoValue:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)collection;
-(HKInspectableValue *)max;
-(HKInspectableValue *)min;
-(long long)collectionType;
-(NSString *)unitString;
-(id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 ;
-(id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 tags:(id)arg3 ;
-(HKInspectableValue *)inspectableValue;
-(void)_assertCollectionType;
-(NSArray *)inspectableValues;
-(id)valuesWithTag:(id)arg1 ;
-(NSArray *)elementTags;
@end

