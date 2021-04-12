/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableSet, NSMutableDictionary, NSString;

@interface SAMountStatusTracker : NSObject <SASerializable> {

	NSMutableSet* _threadsSeen;
	NSMutableDictionary* _mountStatusDict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSMutableDictionary * mountStatusDict;              //@synthesize mountStatusDict=_mountStatusDict - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA41*)arg1 bufferLength:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA41*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA41*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)addMountStatus:(/*function pointer*/void**)arg1 forTimestamp:(id)arg2 ;
-(void)applyMachTimebase:(mach_timebase_info)arg1 ;
-(void)populateReferencesUsingPAStyleSerializedMountStatusTracker:(const SCD_Struct_SA22*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)enumerateUnresponsiveMountsBetweenStartTime:(id)arg1 endTime:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)hasUnresponsiveMountsForThreadID:(unsigned long long)arg1 ;
-(void)enumerateMountsBlockingThread:(unsigned long long)arg1 betweenStartTime:(id)arg2 endTime:(id)arg3 block:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)mountStatusDict;
-(void)fillInThreadsSeen;
@end

