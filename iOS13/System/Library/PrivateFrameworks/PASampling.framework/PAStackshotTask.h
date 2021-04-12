/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@class PAStackshot;

@interface PAStackshotTask : NSObject {

	task_snapshot* _task_snap;
	PAStackshot* _stackshot;
	long long _bytesUsedByThreads;
	long long _bytesAvailableForThreads;
	unsigned long long _bytesBeforeTask;
	void* _imageInfos;
	void* _mainBinary;
	int* _donationReceivingPids;

}

@property (readonly) int pid; 
@property (readonly) const char* name; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isForeground; 
-(const char*)name;
-(int)pid;
-(BOOL)isForeground;
-(BOOL)isDarwinBG;
-(BOOL)isSuppressed;
-(BOOL)isFromMicrostackshot;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3 ;
-(unsigned)powerstatsFlags;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned long long)bytesUsedInBuffer;
-(unsigned long long)_bytesUsedByImageInfos;
-(unsigned long long)_bytesUsedByDonationReceivingPids;
-(unsigned long long)bytesUsedByHeader;
-(void)iterateThreads:(/*^block*/id)arg1 ;
-(unsigned long long)bytesUsedByThreads;
-(id)initWithStackshot:(id)arg1 ;
-(unsigned long long)numImageInfos;
-(dyld_uuid_info_64)mainBinary;
-(id)copyImageInfos;
-(id)copyDonationReceivingPids;
-(const task_snapshot*)task_snap;
@end

