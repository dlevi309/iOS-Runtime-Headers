/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@interface SignpostSupportMachTimeTranslationRange : NSObject {

	unsigned long long _startMachAbsoluteTime;
	unsigned long long _endMachAbsoluteTime;
	unsigned long long _startMachContinuousTime;
	unsigned long long _endMachContinuousTime;

}

@property (nonatomic,readonly) unsigned long long startMachAbsoluteTime;                   //@synthesize startMachAbsoluteTime=_startMachAbsoluteTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachAbsoluteTime;                     //@synthesize endMachAbsoluteTime=_endMachAbsoluteTime - In the implementation block
@property (nonatomic,readonly) unsigned long long startMachContinuousTime;                 //@synthesize startMachContinuousTime=_startMachContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachContinuousTime;                   //@synthesize endMachContinuousTime=_endMachContinuousTime - In the implementation block
@property (nonatomic,readonly) long long absoluteMinusContinuousDelta; 
@property (nonatomic,readonly) long long continuousMinusAbsoluteDelta; 
@property (nonatomic,readonly) unsigned long long machContinuousTimeDuration; 
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(id)initWithArrayRepresentation:(id)arg1 ;
-(unsigned long long)startMachAbsoluteTime;
-(unsigned long long)endMachAbsoluteTime;
-(long long)absoluteMinusContinuousDelta;
-(BOOL)containsMachAbsoluteTime:(unsigned long long)arg1 ;
-(long long)continuousMinusAbsoluteDelta;
-(BOOL)containsMachContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)machContinuousTimeDuration;
-(BOOL)setEndMachAbsoluteTimestamp:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2 ;
-(unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1 ;
-(id)initWithStartMachAbsoluteTime:(unsigned long long)arg1 startContinuousTime:(unsigned long long)arg2 ;
-(id)serializableArrayRepresentation;
@end

