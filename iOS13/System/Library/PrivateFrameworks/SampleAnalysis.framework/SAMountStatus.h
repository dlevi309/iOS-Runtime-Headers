/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSMutableArray, NSString, NSArray;

@interface SAMountStatus : NSObject {

	NSMutableArray* _snapshots;
	NSString* _path;
	NSString* _type;

}

@property (readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (readonly) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * snapshots;              //@synthesize snapshots=_snapshots - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA34*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)type;
-(NSString *)path;
-(NSArray *)snapshots;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA34*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA34*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)applyMachTimebase:(mach_timebase_info)arg1 ;
-(void)populateReferencesUsingPAStyleSerializedMountStatus:(const SCD_Struct_SA23*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)enumerateSnapshotsBetweenStartTime:(id)arg1 endTime:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithName:(id)arg1 andType:(id)arg2 ;
-(void)addStatus:(netfs_status*)arg1 atTimestamp:(id)arg2 ;
-(BOOL)isBlockingThread:(unsigned long long)arg1 betweenStartTime:(id)arg2 andEndTime:(id)arg3 ;
-(BOOL)isUnresponsiveBetweenStartTime:(id)arg1 andEndTime:(id)arg2 ;
-(id)copyName;
-(id)copySanitizedName;
@end

