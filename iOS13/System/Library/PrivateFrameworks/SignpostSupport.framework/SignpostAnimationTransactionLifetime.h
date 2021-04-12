/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostAnimationTransactionLifetime : SignpostAnimationSubInterval {

	unsigned _transactionSeed;
	unsigned _swapId;
	int _pid;
	NSString* _processName;
	NSString* _executablePath;

}

@property (nonatomic,readonly) unsigned transactionSeed;               //@synthesize transactionSeed=_transactionSeed - In the implementation block
@property (nonatomic,readonly) unsigned swapId;                        //@synthesize swapId=_swapId - In the implementation block
@property (nonatomic,readonly) int pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * processName;                 //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;              //@synthesize executablePath=_executablePath - In the implementation block
-(NSString *)executablePath;
-(NSString *)processName;
-(int)pid;
-(id)initWithTransactionSeedInterval:(id)arg1 ;
-(unsigned)transactionSeed;
-(unsigned)swapId;
@end

