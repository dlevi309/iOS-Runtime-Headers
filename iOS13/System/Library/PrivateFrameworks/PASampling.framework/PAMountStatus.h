/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@class NSString, NSMutableArray;

@interface PAMountStatus : NSObject {

	NSString* _path;
	NSString* _type;
	NSMutableArray* _snapshots;

}
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 andType:(id)arg2 ;
-(id)copyName;
-(id)copySanitizedName;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)addStatus:(netfs_status*)arg1 atMachTime:(double)arg2 ;
-(BOOL)isBlockingThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 ;
-(BOOL)isUnresponsiveBetweenMachStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(id)copyUnresponsiveDescriptionForThread:(unsigned long long)arg1 withSanitizedPaths:(BOOL)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 includeThreadIDs:(BOOL)arg5 ;
@end

