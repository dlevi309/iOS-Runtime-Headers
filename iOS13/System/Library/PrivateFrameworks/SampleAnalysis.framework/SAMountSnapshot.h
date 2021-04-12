/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SATimestamp, NSArray, NSString;

@interface SAMountSnapshot : NSObject <SASerializable> {

	SATimestamp* _timeWhenMeasured;
	double _timestampOfLastResponse;
	NSArray* _blockedThreadIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SATimestamp * timeWhenMeasured;                //@synthesize timeWhenMeasured=_timeWhenMeasured - In the implementation block
@property (readonly) double timestampOfLastResponse;                //@synthesize timestampOfLastResponse=_timestampOfLastResponse - In the implementation block
@property (readonly) BOOL isUnresponsive; 
@property (readonly) NSArray * blockedThreadIDs;                    //@synthesize blockedThreadIDs=_blockedThreadIDs - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA40*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)mountSnapshotWithoutReferencesFromPAStyleMountSnapshot:(const SCD_Struct_SA24*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA40*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA40*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(BOOL)isUnresponsive;
-(id)initWithStatus:(netfs_status*)arg1 atTimestamp:(id)arg2 ;
-(BOOL)isBlockingThread:(unsigned long long)arg1 ;
-(double)secondsUntilUnresponsiveFromTimestamp:(id)arg1 ;
-(SATimestamp *)timeWhenMeasured;
-(double)timestampOfLastResponse;
-(NSArray *)blockedThreadIDs;
@end

