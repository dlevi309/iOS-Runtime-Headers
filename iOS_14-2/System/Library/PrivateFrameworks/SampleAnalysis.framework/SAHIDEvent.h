/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSArray *)steps;
-(unsigned)hidEventType;
-(NSString *)debugDescription;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA29*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SATimestamp *)hidEventTimestamp;
@end

