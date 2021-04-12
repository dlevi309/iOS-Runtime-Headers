/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)categoryWithInteger:(long long)arg1 type:(id)arg2 ;
+(id)entityName;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)_categoryFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(long long)integerValue;
-(_DKCategoryType *)categoryType;
-(long long)compareValue:(id)arg1 ;
-(id)primaryValue;
-(id)objectType;
-(id)toPBCodable;
-(void)setIntegerValue:(long long)arg1 ;
-(long long)typeCode;
-(id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3 ;
-(void)setCategoryType:(_DKCategoryType *)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
@end

