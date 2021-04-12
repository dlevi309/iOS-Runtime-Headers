/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostCommitInterval : SignpostAnimationSubInterval {

	unsigned _transactionSeed;
	int _pid;
	unsigned long long _threadID;
	NSString* _processName;
	NSString* _executablePath;

}

@property (nonatomic,readonly) unsigned transactionSeed;                 //@synthesize transactionSeed=_transactionSeed - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;              //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) int pid;                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * processName;                   //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                //@synthesize executablePath=_executablePath - In the implementation block
-(int)pid;
-(NSString *)executablePath;
-(NSString *)processName;
-(unsigned long long)threadID;
-(id)initWithCommitInterval:(id)arg1 ;
-(unsigned)transactionSeed;
@end

