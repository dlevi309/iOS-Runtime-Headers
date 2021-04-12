/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@class NSArray;

@interface AVHapticPlayerParameterCurve : NSObject {

	unsigned long long _type;
	double _time;
	unsigned long long _shape;
	NSArray* _controlPoints;

}

@property (assign) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (assign) double time;                            //@synthesize time=_time - In the implementation block
@property (assign) unsigned long long shape;               //@synthesize shape=_shape - In the implementation block
@property (readonly) NSArray * controlPoints; 
-(id)init;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(double)time;
-(unsigned long long)shape;
-(void)setShape:(unsigned long long)arg1 ;
-(void)setTime:(double)arg1 ;
-(NSArray *)controlPoints;
-(id)initWithType:(unsigned long long)arg1 relativeTime:(double)arg2 shape:(unsigned long long)arg3 controlPoints:(id)arg4 ;
@end

