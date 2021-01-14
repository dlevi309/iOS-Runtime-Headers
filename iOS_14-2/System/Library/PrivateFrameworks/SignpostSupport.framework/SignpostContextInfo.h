/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostCARenderServerFrameMetadata.h>

@class NSString;

@interface SignpostContextInfo : NSObject <SignpostCARenderServerFrameMetadata> {

	int _pid;
	unsigned _frameSeed;
	unsigned _contextId;
	unsigned _transactionSeed;
	unsigned long long _earliestMCT;
	NSString* _executablePath;

}

@property (nonatomic,readonly) int pid;                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned frameSeed;                          //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,readonly) unsigned contextId;                          //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,readonly) unsigned transactionSeed;                    //@synthesize transactionSeed=_transactionSeed - In the implementation block
@property (nonatomic,readonly) unsigned long long earliestMCT;              //@synthesize earliestMCT=_earliestMCT - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                   //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * processName; 
-(int)pid;
-(NSString *)executablePath;
-(unsigned)contextId;
-(NSString *)processName;
-(unsigned)frameSeed;
-(id)initWithContextInfoEvent:(id)arg1 ;
-(unsigned)transactionSeed;
-(unsigned long long)earliestMCT;
@end

