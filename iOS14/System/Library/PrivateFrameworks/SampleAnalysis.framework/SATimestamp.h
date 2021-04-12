/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SATimestamp : NSObject <SAJSONSerialization, SASerializable, NSCopying> {

	unsigned long long _machAbsTime;
	double _machAbsTimeSeconds;
	unsigned long long _machContTime;
	double _machContTimeSeconds;
	double _wallTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long machAbsTime; 
@property (readonly) double machAbsTimeSeconds; 
@property (readonly) unsigned long long machContTime; 
@property (readonly) double machContTimeSeconds; 
@property (readonly) double wallTime; 
+(id)timestamp;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)timestampWithMachAbsTime:(unsigned long long)arg1 machAbsTimeSec:(double)arg2 machContTime:(unsigned long long)arg3 machContTimeSec:(double)arg4 wallTime:(double)arg5 ;
+(id)timestampWithMachAbsTime:(unsigned long long)arg1 machContTime:(unsigned long long)arg2 wallTime:(double)arg3 machTimebase:(mach_timebase_info)arg4 ;
-(long long)compare:(id)arg1 ;
-(BOOL)le:(id)arg1 ;
-(BOOL)lt:(id)arg1 ;
-(BOOL)ge:(id)arg1 ;
-(BOOL)eq:(id)arg1 ;
-(BOOL)ne:(id)arg1 ;
-(BOOL)gt:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isEqualToTimestamp:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA22*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)machAbsTime;
-(double)machAbsTimeSeconds;
-(double)wallTime;
-(id)initWithMachAbsTime:(unsigned long long)arg1 machAbsTimeSec:(double)arg2 machContTime:(unsigned long long)arg3 machContTimeSec:(double)arg4 wallTime:(double)arg5 ;
-(unsigned long long)machContTime;
-(double)machContTimeSeconds;
@end

