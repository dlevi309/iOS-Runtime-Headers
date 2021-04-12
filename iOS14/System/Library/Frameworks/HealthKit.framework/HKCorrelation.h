/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@class NSMutableDictionary, NSUUID, HKCorrelationType, NSSet;

@interface HKCorrelation : HKSample {

	NSMutableDictionary* _objects;

}

@property (getter=_UUID,readonly) NSUUID * UUID; 
@property (readonly) HKCorrelationType * correlationType; 
@property (copy,readonly) NSSet * objects; 
+(BOOL)supportsSecureCoding;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(BOOL)_allowEmptyCorrelations;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 ;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5 ;
+(BOOL)_isConcreteObjectClass;
-(NSSet *)objects;
-(id)_UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(HKCorrelationType *)correlationType;
-(id)objectsForType:(id)arg1 ;
-(BOOL)_containsObjects;
-(void)_addCorrelatedObjects:(id)arg1 ;
-(void)_addCorrelatedObject:(id)arg1 ;
-(void)_removeAllCorrelatedObjects;
-(void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1 ;
-(BOOL)_correlatedObjectsMatchFilterDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)_allTypes;
@end

