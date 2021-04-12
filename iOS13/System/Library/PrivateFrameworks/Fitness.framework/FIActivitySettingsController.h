/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

#import <Fitness/Fitness-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKHealthStore, NSMutableDictionary, NSDate, HKQuantity;

@interface FIActivitySettingsController : NSObject <NSCopying> {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _dirtyPropertiesMap;
	NSDate* _dateOfBirth;
	HKQuantity* _height;
	HKQuantity* _weight;
	long long _biologicalSex;
	long long _wheelchairUse;
	/*^block*/id _updateHandler;

}

@property (nonatomic,retain) NSDate * dateOfBirth;                     //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,retain) HKQuantity * height;                      //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) HKQuantity * weight;                      //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long biologicalSex;                  //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) long long wheelchairUse;                  //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
@property (nonatomic,readonly) HKQuantity * leanBodyMass; 
@property (nonatomic,copy) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKQuantity *)height;
-(void)setHeight:(HKQuantity *)arg1 ;
-(void)setWeight:(HKQuantity *)arg1 ;
-(HKQuantity *)weight;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id)initWithHealthStore:(id)arg1 ;
-(long long)biologicalSex;
-(long long)wheelchairUse;
-(void)setWheelchairUse:(long long)arg1 ;
-(void)setBiologicalSex:(long long)arg1 ;
-(void)setDateOfBirth:(NSDate *)arg1 ;
-(NSDate *)dateOfBirth;
-(void)_setUncommitedValue:(id)arg1 forPropertyKey:(id)arg2 ;
-(BOOL)_logAndNilError:(id*)arg1 operationDescription:(id)arg2 ;
-(BOOL)_commitValue:(id)arg1 forPropertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_hasDirtyPropertyForPropertyKey:(id)arg1 ;
-(void)populateExistingCharacteristics;
-(BOOL)commmitWithError:(id*)arg1 ;
-(HKQuantity *)leanBodyMass;
@end

