/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, SATimestamp, NSString, NSArray;

@interface SAHIDEvent : NSObject <SASerializable> {

	NSMutableArray* _steps;
	unsigned _hidEventType;
	SATimestamp* _hidEventTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SATimestamp * hidEventTimestamp;               //@synthesize hidEventTimestamp=_hidEventTimestamp - In the implementation block
@property (readonly) unsigned hidEventType;                         //@synthesize hidEventType=_hidEventType - In the implementation block
@property (readonly) NSArray * steps;                               //@synthesize steps=_steps - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA45*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)hidEventWithoutReferencesFromPAStyleSerializedHIDEvent:(const SCD_Struct_SA21*)arg1 ;
+(id)hidEventWithHIDEventType:(unsigned)arg1 atTimestamp:(id)arg2 ;
+(void)parseKTrace:(ktrace_sessionRef)arg1 findingHIDEvents:(/*^block*/id)arg2 ;
-(NSString *)debugDescription;
-(NSArray *)steps;
-(unsigned)hidEventType;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA45*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA45*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SATimestamp *)hidEventTimestamp;
-(id)initWithHIDEventType:(unsigned)arg1 atTimestamp:(id)arg2 ;
-(void)addKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
@end

