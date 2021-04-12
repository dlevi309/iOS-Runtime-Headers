/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@class NSString, NSArray;

@interface CHHapticParameterCurve : NSObject {

	NSString* _param;
	double _time;
	NSArray* _controlPoints;

}

@property (readonly) NSString * parameterID;               //@synthesize param=_param - In the implementation block
@property (assign) double relativeTime;                    //@synthesize time=_time - In the implementation block
@property (readonly) NSArray * controlPoints; 
-(id)init;
-(NSArray *)controlPoints;
-(void)setRelativeTime:(double)arg1 ;
-(double)relativeTime;
-(NSString *)parameterID;
-(id)initWithParameterID:(id)arg1 controlPoints:(id)arg2 relativeTime:(double)arg3 ;
@end

