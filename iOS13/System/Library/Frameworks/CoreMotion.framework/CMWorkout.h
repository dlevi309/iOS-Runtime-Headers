/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* fSessionId;
	long long fType;
	long long fLocationType;
	NSDate* fStartDate;
	NSDate* fEndDate;
	BOOL fIsUserInitiated;
	BOOL _isUserInitiated;

}

@property (nonatomic,readonly) BOOL isUserInitiated;                //@synthesize isUserInitiated=_isUserInitiated - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long locationType; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)workoutName:(long long)arg1 ;
+(BOOL)workoutIsTypeWalking:(long long)arg1 ;
+(BOOL)workoutIsTypeRunning:(long long)arg1 ;
+(long long)workoutLocationTypeFromCMWorkoutType:(long long)arg1 ;
+(id)workoutLocationName:(long long)arg1 ;
+(int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1 ;
+(long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1 ;
+(long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)arg1 ;
+(long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)arg1 ;
+(BOOL)workoutIsTypePedestrian:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)isUserInitiated;
-(NSUUID *)sessionId;
-(long long)locationType;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 ;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 ;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(void)setLocationType:(long long)arg1 ;
-(void)setIsUserInitiated:(BOOL)arg1 ;
-(void)setWorkoutType:(long long)arg1 ;
@end

