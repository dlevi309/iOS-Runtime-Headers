/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASerializable.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface PAWSUpdateDataStore : NSObject <PASerializable> {

	NSMutableArray* _wsUpdateArray;
	NSObject*<OS_dispatch_queue> _wsUpdateCallbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(void)_printFrameReportExplanationToStream:(id)arg1 ;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(id)_getWSUpdateArraySnapshot;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 andEndIndex:(unsigned long long)arg2 andStartDisplayIndex:(unsigned long long)arg3 withSampleDataStore:(id)arg4 toStream:(id)arg5 ;
@end

