/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSString, NSArray;

@interface SADispatchQueue : NSObject <SASerializable> {

	NSMutableArray* _dispatchQueueStates;
	BOOL _isConcurrent;
	unsigned long long _dispatchQueueId;
	NSString* _dispatchQueueLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long dispatchQueueId;              //@synthesize dispatchQueueId=_dispatchQueueId - In the implementation block
@property (readonly) NSString * dispatchQueueLabel; 
@property (readonly) BOOL isConcurrent; 
@property (readonly) NSArray * dispatchQueueStates;                   //@synthesize dispatchQueueStates=_dispatchQueueStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(id)initWithId:(unsigned long long)arg1 ;
-(BOOL)isConcurrent;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA20*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)dispatchQueueId;
-(NSString *)dispatchQueueLabel;
-(NSArray *)dispatchQueueStates;
@end

