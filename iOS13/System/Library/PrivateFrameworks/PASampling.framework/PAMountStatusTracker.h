/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASerializable.h>

@class NSMutableDictionary, NSString;

@interface PAMountStatusTracker : NSObject <PASerializable> {

	NSMutableDictionary* _mountStatusDict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(id)init;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)takeCurrentMountStatusForMachTime:(double)arg1 ;
-(unsigned long long)forEachMountBlockingThread:(unsigned long long)arg1 withSanitizedPaths:(BOOL)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 runBlock:(/*^block*/id)arg5 ;
-(unsigned long long)forEachUnresponsiveMountWithSanitizedPaths:(BOOL)arg1 BetweenMachStartTime:(double)arg2 andEndTime:(double)arg3 runBlock:(/*^block*/id)arg4 ;
@end

