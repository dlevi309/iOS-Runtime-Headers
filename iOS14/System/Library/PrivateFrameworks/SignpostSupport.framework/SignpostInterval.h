/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)scope;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(SignpostEvent *)endEvent;
-(long long)tv_sec;
-(unsigned long long)hash;
-(float)durationSeconds;
-(void)setEndEvent:(SignpostEvent *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)tv_usec;
-(unsigned long long)durationMachContinuousTime;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(id)number1Name;
-(id)number1Value;
-(id)string1Value;
-(SignpostEvent *)beginEvent;
-(BOOL)isSyntheticInterval;
-(id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2 ;
-(id)humanReadableType;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 ;
-(BOOL)telemetryEnabled;
-(id)string1Name;
-(id)string2Name;
-(id)string2Value;
-(id)number2Name;
-(id)number2Value;
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

