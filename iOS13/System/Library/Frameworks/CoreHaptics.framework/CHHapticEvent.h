/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticPlayable.h>

@class NSArray, NSString;

@interface CHHapticEvent : NSObject <CHHapticPlayable> {

	NSString* _type;
	unsigned long long _audioResID;
	NSArray* _eventParams;
	double _time;
	double _duration;

}

@property (readonly) unsigned long long audioResID; 
@property (readonly) double fullDuration; 
@property (readonly) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * eventParameters;                     //@synthesize eventParams=_eventParams - In the implementation block
@property (assign) double relativeTime;                             //@synthesize time=_time - In the implementation block
@property (assign) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
+(BOOL)parameterValuesFromLegacyEventType:(unsigned long long)arg1 sharpness:(float*)arg2 fullness:(float*)arg3 error:(id*)arg4 ;
-(id)init;
-(NSString *)type;
-(double)duration;
-(NSArray *)parameters;
-(NSArray *)events;
-(void)setDuration:(double)arg1 ;
-(id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3 ;
-(id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3 ;
-(void)setRelativeTime:(double)arg1 ;
-(double)relativeTime;
-(id)getType;
-(NSArray *)eventParameters;
-(unsigned long long)audioResID;
-(id)initWithAudioResourceIndex:(unsigned long long)arg1 parameters:(id)arg2 time:(double)arg3 ;
-(id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4 ;
-(BOOL)resolveExternalResources:(id)arg1 error:(id*)arg2 ;
-(NSArray *)parameterCurves;
-(id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4 ;
-(double)fullDuration;
@end

