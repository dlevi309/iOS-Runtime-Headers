/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SATimestamp, NSString;

@interface SATimeRange : NSObject <SAJSONSerialization, SASerializable, NSCopying> {

	SATimestamp* _startTime;
	SATimestamp* _endTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SATimestamp * startTime; 
@property (readonly) SATimestamp * endTime; 
@property (readonly) unsigned long long deltaMachAbsTime; 
@property (readonly) double deltaMachAbsTimeSeconds; 
@property (readonly) unsigned long long deltaMachContTime; 
@property (readonly) double deltaMachContTimeSeconds; 
@property (readonly) double deltaWallTime; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)timeRangeStart:(id)arg1 end:(id)arg2 ;
-(long long)compare:(id)arg1 ;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(SATimestamp *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SATimestamp *)startTime;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA23*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)deltaMachAbsTime;
-(double)deltaMachAbsTimeSeconds;
-(unsigned long long)deltaMachContTime;
-(double)deltaMachContTimeSeconds;
-(double)deltaWallTime;
@end

