/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSArray, NSString;

@interface PAMountSnapshot : NSObject <PASerializable> {

	double _machTimestampWhenMeasured;
	double _machTimestampOfLastResponse;
	NSArray* _blockedThreadIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimestampWhenMeasured;                //@synthesize machTimestampWhenMeasured=_machTimestampWhenMeasured - In the implementation block
@property (readonly) double machTimestampOfLastResponse;              //@synthesize machTimestampOfLastResponse=_machTimestampOfLastResponse - In the implementation block
@property (readonly) BOOL isUnresponsive; 
@property (readonly) NSArray * blockedThreadIDs;                      //@synthesize blockedThreadIDs=_blockedThreadIDs - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)isUnresponsive;
-(BOOL)isBlockingThread:(unsigned long long)arg1 ;
-(NSArray *)blockedThreadIDs;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithSerializedMountSnapshot:(const SCD_Struct_PA6*)arg1 ;
-(id)initWithStatus:(netfs_status*)arg1 atMachTime:(double)arg2 ;
-(double)machTimestampWhenMeasured;
-(double)machTimestampOfLastResponse;
@end

