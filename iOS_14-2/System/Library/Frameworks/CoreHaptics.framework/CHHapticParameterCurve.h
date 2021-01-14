/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)parameterID;
-(id)initWithParameterID:(id)arg1 controlPoints:(id)arg2 relativeTime:(double)arg3 ;
-(void)setRelativeTime:(double)arg1 ;
-(NSArray *)controlPoints;
-(double)relativeTime;
@end

