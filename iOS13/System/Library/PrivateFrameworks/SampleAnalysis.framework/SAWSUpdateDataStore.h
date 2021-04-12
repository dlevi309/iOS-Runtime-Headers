/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <libobjc.A.dylib/SASerializable.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface SAWSUpdateDataStore : NSObject <SASerializable> {

	NSMutableArray* _wsUpdateArray;
	NSObject*<OS_dispatch_queue> _wsUpdateCallbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(void)_printFrameReportExplanationToStream:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 startDisplayIndex:(unsigned long long)arg3 sampleDataStore:(id)arg4 toStream:(id)arg5 ;
-(id)_getWSUpdateArraySnapshot;
@end

