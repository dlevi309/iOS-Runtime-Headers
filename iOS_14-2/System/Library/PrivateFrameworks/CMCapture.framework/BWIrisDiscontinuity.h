/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSArray;

@interface BWIrisDiscontinuity : NSObject {

	SCD_Struct_BW8 _discontinuityTime;
	SCD_Struct_BW8 _duration;
	NSArray* _timeSkews;
	NSArray* _recipe;
	SCD_Struct_BW8 _targetFrameDuration;
	BOOL _onlyRetime;

}

@property (readonly) SCD_Struct_BW8 time; 
@property (nonatomic,retain) NSArray * timeSkews;                     //@synthesize timeSkews=_timeSkews - In the implementation block
@property (readonly) SCD_Struct_BW8 targetFrameDuration; 
+(int)maximumNumberOfConsecutiveDroppedFrames;
-(SCD_Struct_BW8)time;
-(SCD_Struct_BW8)targetFrameDuration;
-(NSArray *)timeSkews;
-(long long)_offsetIndexFromDiscontinuityForTime:(SCD_Struct_BW8)arg1 ;
-(id)initWithTime:(SCD_Struct_BW8)arg1 duration:(SCD_Struct_BW8)arg2 targetFrameDuration:(SCD_Struct_BW8)arg3 onlyRetime:(BOOL)arg4 timeSkews:(id)arg5 ;
-(BOOL)containsVideoBufferTime:(SCD_Struct_BW8)arg1 ;
-(BOOL)shouldKeepBufferWithTime:(SCD_Struct_BW8)arg1 nextAdjustedTimeInOut:(SCD_Struct_BW8*)arg2 ;
-(void)setTimeSkews:(NSArray *)arg1 ;
-(void)dealloc;
@end

