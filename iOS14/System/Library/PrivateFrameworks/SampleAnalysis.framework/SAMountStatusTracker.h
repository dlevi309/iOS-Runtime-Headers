/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA25*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)enumerateUnresponsiveMountsBetweenStartTime:(id)arg1 endTime:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)hasUnresponsiveMountsForThreadID:(unsigned long long)arg1 ;
-(void)enumerateMountsBlockingThread:(unsigned long long)arg1 betweenStartTime:(id)arg2 endTime:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)fillInThreadsSeen;
@end

