/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@class NSMutableArray, NSArray;

@interface PAHIDEvent : NSObject {

	NSMutableArray* _steps;
	unsigned _hidEventType;
	unsigned long long _hidEventMachAbs;
	double _hidEventTimestamp;

}

@property (readonly) unsigned long long hidEventMachAbs;              //@synthesize hidEventMachAbs=_hidEventMachAbs - In the implementation block
@property (readonly) double hidEventTimestamp;                        //@synthesize hidEventTimestamp=_hidEventTimestamp - In the implementation block
@property (readonly) unsigned hidEventType;                           //@synthesize hidEventType=_hidEventType - In the implementation block
@property (readonly) NSArray * steps;                                 //@synthesize steps=_steps - In the implementation block
+(id)classDictionaryKey;
+(void)parseKTrace:(ktrace_sessionRef)arg1 findingHIDEvents:(/*^block*/id)arg2 ;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)hidEventWithHIDEventType:(unsigned)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3 ;
-(id)debugDescription;
-(NSArray *)steps;
-(unsigned)hidEventType;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(double)hidEventTimestamp;
-(void)addKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithHIDEventType:(unsigned)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3 ;
-(unsigned long long)hidEventMachAbs;
-(id)initWithSerializedHIDEvent:(const SCD_Struct_PA8*)arg1 ;
@end

