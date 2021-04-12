/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSUUID, NSString;

@interface CMPedometerData : NSObject <SRSampling, NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fNumberOfSteps;
	NSNumber* fDistance;
	NSNumber* fFloorsAscended;
	NSNumber* fFloorsDescended;
	NSNumber* fRecordId;
	NSNumber* fCurrentPace;
	NSNumber* fCurrentCadence;
	NSDate* fFirstStepTime;
	NSNumber* fActiveTime;
	NSUUID* fSourceId;
	NSNumber* fIsOdometerDistance;
	NSNumber* fIsOdometerPace;
	NSNumber* fNumberOfPushes;
	NSNumber* fWorkoutType;
	NSNumber* fElevationAscended;
	NSNumber* fElevationDescended;
	NSNumber* fDistanceSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSNumber * numberOfPushes; 
@property (nonatomic,readonly) NSNumber * workoutType; 
@property (nonatomic,readonly) NSNumber * elevationAscended; 
@property (nonatomic,readonly) NSNumber * elevationDescended; 
@property (nonatomic,readonly) NSNumber * distanceSource; 
@property (nonatomic,readonly) NSDate * firstStepTime; 
@property (nonatomic,readonly) NSNumber * activeTime; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * numberOfSteps; 
@property (nonatomic,readonly) NSNumber * distance; 
@property (nonatomic,readonly) NSNumber * floorsAscended; 
@property (nonatomic,readonly) NSNumber * floorsDescended; 
@property (nonatomic,readonly) NSNumber * currentPace; 
@property (nonatomic,readonly) NSNumber * currentCadence; 
@property (nonatomic,readonly) NSNumber * averageActivePace; 
+(BOOL)supportsSecureCoding;
+(id)maxPedometerEntries;
-(NSDate *)endDate;
-(NSNumber *)numberOfSteps;
-(long long)recordId;
-(NSDate *)firstStepTime;
-(NSUUID *)sourceId;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(long long)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 firstStepTime:(double)arg10 activeTime:(id)arg11 sourceId:(id)arg12 isOdometerDistance:(id)arg13 isOdometerPace:(id)arg14 pushes:(int)arg15 workoutType:(int)arg16 elevationAscended:(id)arg17 elevationDescended:(id)arg18 distanceSource:(int)arg19 ;
-(NSNumber *)distance;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)numberOfPushes;
-(NSNumber *)currentPace;
-(NSNumber *)currentCadence;
-(BOOL)isOdometerDistance;
-(BOOL)isOdometerPace;
-(NSNumber *)floorsDescended;
-(NSNumber *)averageActivePace;
-(NSNumber *)distanceSource;
-(NSString *)description;
-(NSNumber *)activeTime;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)floorsAscended;
-(NSNumber *)workoutType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(NSNumber *)elevationAscended;
-(NSNumber *)elevationDescended;
-(void)dealloc;
@end

