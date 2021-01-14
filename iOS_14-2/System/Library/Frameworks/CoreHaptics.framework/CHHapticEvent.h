/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)parameterValuesFromLegacyEventType:(unsigned long long)arg1 sharpness:(float*)arg2 fullness:(float*)arg3 error:(id*)arg4 ;
-(NSArray *)parameters;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(NSArray *)parameterCurves;
-(id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3 ;
-(id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4 ;
-(id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3 ;
-(id)getType;
-(unsigned long long)audioResID;
-(NSArray *)eventParameters;
-(id)initWithAudioResourceIndex:(unsigned long long)arg1 parameters:(id)arg2 time:(double)arg3 duration:(double)arg4 ;
-(id)resolveExternalResources:(id)arg1 error:(id*)arg2 ;
-(id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4 ;
-(double)fullDuration;
-(NSString *)type;
-(void)setRelativeTime:(double)arg1 ;
-(NSArray *)events;
-(double)duration;
-(double)relativeTime;
@end

