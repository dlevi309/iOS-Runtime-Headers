/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <SignpostSupport/SignpostObject.h>

@class SignpostEvent, NSString;

@interface SignpostInterval : SignpostObject {

	SignpostEvent* _beginEvent;
	SignpostEvent* _endEvent;

}

@property (nonatomic,readonly) NSString * _intervalTypeString; 
@property (nonatomic,retain) SignpostEvent * beginEvent;                    //@synthesize beginEvent=_beginEvent - In the implementation block
@property (nonatomic,retain) SignpostEvent * endEvent;                      //@synthesize endEvent=_endEvent - In the implementation block
@property (nonatomic,readonly) BOOL isSyntheticInterval; 
+(id)serializationTypeNumber;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)scope;
-(float)durationSeconds;
-(void)setEndEvent:(SignpostEvent *)arg1 ;
-(SignpostEvent *)endEvent;
-(BOOL)isSyntheticInterval;
-(SignpostEvent *)beginEvent;
-(unsigned long long)durationMachContinuousTime;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2 ;
-(id)humanReadableType;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 ;
-(BOOL)telemetryEnabled;
-(id)string1Name;
-(id)string1Value;
-(id)string2Name;
-(id)string2Value;
-(id)number1Name;
-(id)number1Value;
-(id)number2Name;
-(id)number2Value;
-(long long)tv_sec;
-(int)tv_usec;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(void)_adjustBeginTimeVal:(timeval*)arg1 ;
-(void)_adjustEndTimeVal:(timeval*)arg1 ;
-(BOOL)_hasBeginTimeval;
-(BOOL)_hasEndTimeval;
-(id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(BOOL)arg3 ;
-(BOOL)beginTimezone:(timezone*)arg1 ;
-(BOOL)endTimezone:(timezone*)arg1 ;
-(id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 ;
-(NSString *)_intervalTypeString;
-(id)_eventDescriptions;
-(void)setBeginEvent:(SignpostEvent *)arg1 ;
@end

