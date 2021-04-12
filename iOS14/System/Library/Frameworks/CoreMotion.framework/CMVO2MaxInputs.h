/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSDate* fStartDate;
	double fMets;
	long long fMetSource;
	double fHeartRate;
	double fHeartRateConfidence;
	double fGrade;
	long long fGradeType;
	double fCadence;
	double fPace;
	BOOL fHasGPS;
	BOOL fHasStrideCal;
	long long fWorkoutType;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double mets; 
@property (nonatomic,readonly) long long metSource; 
@property (nonatomic,readonly) double heartRate; 
@property (nonatomic,readonly) double heartRateConfidence; 
@property (nonatomic,readonly) double grade; 
@property (nonatomic,readonly) long long gradeType; 
@property (nonatomic,readonly) double cadence; 
@property (nonatomic,readonly) double pace; 
@property (nonatomic,readonly) BOOL hasGPS; 
@property (nonatomic,readonly) BOOL hasStrideCal; 
@property (nonatomic,readonly) long long workoutType; 
+(BOOL)supportsSecureCoding;
+(VO2MaxInput)VO2MaxInputFromCMVO2MaxInputs:(id)arg1 ;
-(double)mets;
-(double)pace;
-(unsigned long long)recordId;
-(double)grade;
-(id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(BOOL)arg11 hasStrideCal:(BOOL)arg12 workoutType:(long long)arg13 ;
-(double)cadence;
-(BOOL)hasGPS;
-(NSDate *)startDate;
-(long long)gradeType;
-(BOOL)hasStrideCal;
-(id)initWithSample:(VO2MaxInput)arg1 ;
-(double)heartRateConfidence;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)workoutType;
-(long long)metSource;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(double)heartRate;
@end

