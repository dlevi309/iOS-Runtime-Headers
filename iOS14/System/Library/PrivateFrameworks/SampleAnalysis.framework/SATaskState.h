/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SATimestamp, NSSet, NSString;

@interface SATaskState : NSObject <SASerializable> {

	unsigned _suspendCount;
	unsigned _faults;
	unsigned _pageins;
	unsigned _cowFaults;
	unsigned _latencyQos;
	SATimestamp* _startTimestamp;
	SATimestamp* _endTimestamp;
	unsigned long long _startSampleIndex;
	unsigned long long _endSampleIndex;
	unsigned long long _taskSizeInBytes;
	unsigned long long _terminatedThreadsUserTimeInNs;
	unsigned long long _terminatedThreadsSystemTimeInNs;
	unsigned long long _terminatedThreadsInstructions;
	unsigned long long _terminatedThreadsCycles;
	NSSet* _donatingUniquePids;
	unsigned long long _ssFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SATimestamp * startTimestamp; 
@property (readonly) SATimestamp * endTimestamp; 
@property (readonly) unsigned long long startSampleIndex; 
@property (readonly) unsigned long long endSampleIndex; 
@property (readonly) BOOL isSuspended; 
@property (readonly) unsigned suspendCount; 
@property (readonly) unsigned long long taskSizeInBytes; 
@property (readonly) unsigned faults; 
@property (readonly) unsigned pageins; 
@property (readonly) unsigned cowFaults; 
@property (readonly) unsigned latencyQos; 
@property (readonly) unsigned long long terminatedThreadsUserTimeInNs; 
@property (readonly) unsigned long long terminatedThreadsSystemTimeInNs; 
@property (readonly) unsigned long long terminatedThreadsCpuTimeNs; 
@property (readonly) unsigned long long terminatedThreadsInstructions; 
@property (readonly) unsigned long long terminatedThreadsCycles; 
@property (readonly) NSSet * donatingUniquePids; 
@property (readonly) unsigned long long ssFlags; 
@property (readonly) BOOL isTaskResourceFlagged; 
@property (readonly) BOOL isTerminatedSnapshot; 
@property (readonly) BOOL isPidSuspended; 
@property (readonly) BOOL isFrozen; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isDarwinExtBG; 
@property (readonly) BOOL isVisible; 
@property (readonly) BOOL isNonVisible; 
@property (readonly) BOOL isForeground; 
@property (readonly) BOOL isBoosted; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isTimerThrottled; 
@property (readonly) BOOL isImpDonor; 
@property (readonly) BOOL isLiveImpDonor; 
@property (readonly) BOOL isDirty; 
@property (readonly) BOOL wqExceededConstrainedThreadLimit; 
@property (readonly) BOOL wqExceededTotalThreadLimit; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(BOOL)isSuspended;
-(BOOL)isDirty;
-(unsigned)suspendCount;
-(SATimestamp *)startTimestamp;
-(NSString *)debugDescription;
-(BOOL)isSuppressed;
-(unsigned)faults;
-(BOOL)isForeground;
-(SATimestamp *)endTimestamp;
-(BOOL)isVisible;
-(unsigned long long)ssFlags;
-(unsigned)pageins;
-(BOOL)isFrozen;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA27*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)endSampleIndex;
-(unsigned long long)startSampleIndex;
-(BOOL)isDarwinBG;
-(unsigned long long)taskSizeInBytes;
-(unsigned)latencyQos;
-(BOOL)isPidSuspended;
-(id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(BOOL)wqExceededTotalThreadLimit;
-(BOOL)wqExceededConstrainedThreadLimit;
-(BOOL)isTerminatedSnapshot;
-(BOOL)isBoosted;
-(NSSet *)donatingUniquePids;
-(unsigned)cowFaults;
-(unsigned long long)terminatedThreadsCycles;
-(unsigned long long)terminatedThreadsCpuTimeNs;
-(unsigned long long)terminatedThreadsInstructions;
-(unsigned long long)terminatedThreadsUserTimeInNs;
-(unsigned long long)terminatedThreadsSystemTimeInNs;
-(BOOL)isTaskResourceFlagged;
-(BOOL)isDarwinExtBG;
-(BOOL)isNonVisible;
-(BOOL)isTimerThrottled;
-(BOOL)isImpDonor;
-(BOOL)isLiveImpDonor;
@end

