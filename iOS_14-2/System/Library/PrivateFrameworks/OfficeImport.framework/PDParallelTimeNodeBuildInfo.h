/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setValue:(id)arg1 ;
-(double)delay;
-(PDAnimationTarget *)target;
-(double)duration;
-(id)value;
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
@end

