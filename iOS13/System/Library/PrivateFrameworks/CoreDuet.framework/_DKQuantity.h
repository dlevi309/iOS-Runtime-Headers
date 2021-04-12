/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)quantityWithDouble:(double)arg1 type:(id)arg2 ;
+(id)entityName;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(long long)compareValue:(id)arg1 ;
-(id)primaryValue;
-(id)objectType;
-(id)toPBCodable;
-(void)setDoubleValue:(double)arg1 ;
-(long long)typeCode;
-(_DKQuantityType *)quantityType;
-(id)initWithDouble:(double)arg1 type:(id)arg2 ;
-(void)setQuantityType:(_DKQuantityType *)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
@end

