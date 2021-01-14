/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class NSArray, HKInspectableValue, NSString;

@interface HKInspectableValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)hasNoValue:(id)arg1 ;
+(id)inspectableValueCollectionSingleWithValue:(id)arg1 ;
+(id)inspectableValueCollectionListWithValues:(id)arg1 ;
+(id)inspectableValueCollectionTaggedListWithValues:(id)arg1 tags:(id)arg2 ;
+(id)inspectableValueCollectionRangeWithMin:(id)arg1 max:(id)arg2 ;
+(id)inspectableValueCollectionRangeWithMin:(id)arg1 ;
+(id)inspectableValueCollectionRangeWithMax:(id)arg1 ;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
-(NSString *)unitString;
-(NSArray *)collection;
-(id)init;
-(NSArray *)elementTags;
-(id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 ;
-(HKInspectableValue *)inspectableValue;
-(id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 tags:(id)arg3 ;
-(void)_assertCollectionType;
-(NSArray *)inspectableValues;
-(id)valuesWithTag:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKInspectableValue *)min;
-(NSString *)description;
-(HKInspectableValue *)max;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)collectionType;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

