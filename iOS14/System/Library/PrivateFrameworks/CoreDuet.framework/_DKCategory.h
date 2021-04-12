/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class _DKCategoryType, NSString;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	long long _integerValue;
	_DKCategoryType* _categoryType;

}

@property (assign) long long integerValue;                          //@synthesize integerValue=_integerValue - In the implementation block
@property (retain) _DKCategoryType * categoryType;                  //@synthesize categoryType=_categoryType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)categoryWithInteger:(long long)arg1 type:(id)arg2 ;
+(id)_categoryFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
-(long long)integerValue;
-(id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(double)doubleValue;
-(_DKCategoryType *)categoryType;
-(id)objectType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCategoryType:(_DKCategoryType *)arg1 ;
-(id)stringValue;
-(id)primaryValue;
-(NSString *)description;
-(void)setIntegerValue:(long long)arg1 ;
-(long long)typeCode;
-(id)initWithCoder:(id)arg1 ;
-(long long)compareValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

