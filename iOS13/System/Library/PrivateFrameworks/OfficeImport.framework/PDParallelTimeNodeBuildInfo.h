/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDAnimationTarget;

@interface PDParallelTimeNodeBuildInfo : NSObject {

	PDAnimationTarget* mTarget;
	double mDelay;
	double mDuration;
	int mIterateType;
	id mValue;

}

@property (retain) PDAnimationTarget * target; 
@property (assign) double delay; 
@property (assign) double duration; 
@property (assign) int iterateType; 
@property (retain) id value; 
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(PDAnimationTarget *)target;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
@end

