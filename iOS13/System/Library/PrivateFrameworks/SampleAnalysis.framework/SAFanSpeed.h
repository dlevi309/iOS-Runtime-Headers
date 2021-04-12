/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SATimestamp, NSString;

@interface SAFanSpeed : NSObject <SASerializable> {

	int _fanSpeed;
	SATimestamp* _timestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SATimestamp * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) int fanSpeed;                                  //@synthesize fanSpeed=_fanSpeed - In the implementation block
@property (readonly) BOOL fanSpeedIsValid; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA44*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)fanSpeedWithPAStyleSerializedFanSpeed:(const SCD_Struct_SA20*)arg1 ;
+(int)numFans;
-(id)init;
-(SATimestamp *)timestamp;
-(id)initWithTimestamp:(id)arg1 ;
-(id)initEmpty;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA44*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(SCD_Struct_SA44*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(int)fanSpeed;
-(BOOL)fanSpeedIsValid;
@end

