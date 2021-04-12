/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWIrisDiscontinuity : NSObject {

	SCD_Struct_BW2 _discontinuityTime;
	SCD_Struct_BW2 _duration;
	NSArray* _timeSkews;
	NSArray* _recipe;
	SCD_Struct_BW2 _targetFrameDuration;
	BOOL _onlyRetime;

}

@property (readonly) SCD_Struct_BW2 time; 
@property (nonatomic,retain) NSArray * timeSkews;                     //@synthesize timeSkews=_timeSkews - In the implementation block
@property (readonly) SCD_Struct_BW2 targetFrameDuration; 
+(int)maximumNumberOfConsecutiveDroppedFrames;
-(void)dealloc;
-(SCD_Struct_BW2)time;
-(long long)_offsetIndexFromDiscontinuityForTime:(SCD_Struct_BW2)arg1 ;
-(id)initWithTime:(SCD_Struct_BW2)arg1 duration:(SCD_Struct_BW2)arg2 targetFrameDuration:(SCD_Struct_BW2)arg3 onlyRetime:(BOOL)arg4 timeSkews:(id)arg5 ;
-(BOOL)containsVideoBufferTime:(SCD_Struct_BW2)arg1 ;
-(BOOL)shouldKeepBufferWithTime:(SCD_Struct_BW2)arg1 nextAdjustedTimeInOut:(SCD_Struct_BW2*)arg2 ;
-(SCD_Struct_BW2)targetFrameDuration;
-(NSArray *)timeSkews;
-(void)setTimeSkews:(NSArray *)arg1 ;
@end

