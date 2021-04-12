/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCHapticEvent : NSObject <NSSecureCoding> {

	BOOL _stopped;
	BOOL _transientBeganAsContinuousEvent;
	unsigned long long _identifier;
	long long _type;
	long long _subtype;
	double _startTime;
	double _intensity;
	double _sharpness;

}

@property (assign,nonatomic) unsigned long long identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long subtype;                                 //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) double startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double intensity;                                  //@synthesize intensity=_intensity - In the implementation block
@property (assign,nonatomic) double sharpness;                                  //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) BOOL stopped;                                      //@synthesize stopped=_stopped - In the implementation block
@property (assign,nonatomic) BOOL transientBeganAsContinuousEvent;              //@synthesize transientBeganAsContinuousEvent=_transientBeganAsContinuousEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)subtype;
-(void)setStartTime:(double)arg1 ;
-(BOOL)stopped;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setStopped:(BOOL)arg1 ;
-(long long)type;
-(double)sharpness;
-(id)initWithCoder:(id)arg1 ;
-(void)setSharpness:(double)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(void)setSubtype:(long long)arg1 ;
-(double)startTime;
-(pair<bool, float>)valueForNoteParam:(unsigned)arg1 inParameters:(id)arg2 ;
-(void)evaluateDeviceNoteParams:(id)arg1 ;
-(id)initWithSyntheticCommand:(id)arg1 ;
-(BOOL)transientBeganAsContinuousEvent;
-(void)setTransientBeganAsContinuousEvent:(BOOL)arg1 ;
@end

