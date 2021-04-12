/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASerializable.h>

@class NSString;

@interface PAWSUpdate : NSObject <PASerializable> {

	double _frameStartTime;
	double _deferStartTime;
	double _workStartTime;
	double _workEndTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double frameStartTime;                         //@synthesize frameStartTime=_frameStartTime - In the implementation block
@property (readonly) double waitStartTime; 
@property (readonly) double waitEndTime; 
@property (readonly) double deferStartTime;                         //@synthesize deferStartTime=_deferStartTime - In the implementation block
@property (readonly) double deferEndTime; 
@property (readonly) double workStartTime;                          //@synthesize workStartTime=_workStartTime - In the implementation block
@property (readonly) double workEndTime;                            //@synthesize workEndTime=_workEndTime - In the implementation block
@property (readonly) double frameEndTime; 
@property (readonly) double waitDuration; 
@property (readonly) double workDuration; 
@property (readonly) double deferDuration; 
@property (readonly) double frameDuration; 
@property (readonly) BOOL wasIdle; 
+(id)classDictionaryKey;
+(void)printASCIIBarLegendToStream:(id)arg1 ;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(double)frameDuration;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(double)frameStartTime;
-(double)deferStartTime;
-(double)waitEndTime;
-(double)waitStartTime;
-(double)waitDuration;
-(double)workStartTime;
-(double)workEndTime;
-(double)deferEndTime;
-(double)frameEndTime;
-(double)workDuration;
-(double)deferDuration;
-(BOOL)wasIdle;
-(void)printFPSASCIIBarToStream:(id)arg1 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
@end

