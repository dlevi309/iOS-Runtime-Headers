/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class _DKQuantityType, NSString;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	double _doubleValue;
	_DKQuantityType* _quantityType;

}

@property (assign) double doubleValue;                              //@synthesize doubleValue=_doubleValue - In the implementation block
@property (retain) _DKQuantityType * quantityType;                  //@synthesize quantityType=_quantityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)quantityWithDouble:(double)arg1 type:(id)arg2 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(double)doubleValue;
-(void)setDoubleValue:(double)arg1 ;
-(id)objectType;
-(_DKQuantityType *)quantityType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)stringValue;
-(id)primaryValue;
-(NSString *)description;
-(id)initWithDouble:(double)arg1 type:(id)arg2 ;
-(long long)typeCode;
-(id)initWithCoder:(id)arg1 ;
-(long long)compareValue:(id)arg1 ;
-(void)setQuantityType:(_DKQuantityType *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

