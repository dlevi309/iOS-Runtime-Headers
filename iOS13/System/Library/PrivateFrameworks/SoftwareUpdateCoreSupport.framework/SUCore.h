/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SUCore : NSObject {

	NSString* _baseDomain;
	NSString* _filesystemBaseDir;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _delegateCallbackQueue;
	NSObject*<OS_dispatch_queue> _waitedOperationQueue;

}

@property (nonatomic,retain) NSString * baseDomain;                                             //@synthesize baseDomain=_baseDomain - In the implementation block
@property (nonatomic,retain) NSString * filesystemBaseDir;                                      //@synthesize filesystemBaseDir=_filesystemBaseDir - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;                    //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue;              //@synthesize delegateCallbackQueue=_delegateCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> waitedOperationQueue;               //@synthesize waitedOperationQueue=_waitedOperationQueue - In the implementation block
+(id)sharedCore;
+(id)errorNameForCode:(long long)arg1 ;
+(id)sharedSUCoreDomainAppending:(id)arg1 ;
+(id)beginTransactionWithName:(id)arg1 ;
+(void)endTransaction:(id)arg1 withName:(id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)commonDomain;
-(id)commonFilesystemBaseDir;
-(id)buildError:(long long)arg1 underlying:(id)arg2 description:(id)arg3 ;
-(void)setBaseDomain:(NSString *)arg1 ;
-(NSString *)baseDomain;
-(void)setFilesystemBaseDir:(NSString *)arg1 ;
-(NSString *)filesystemBaseDir;
-(void)useDomain:(id)arg1 ;
-(void)useFilesystemBaseDir:(id)arg1 ;
-(id)selectCompletionQueue:(id)arg1 ;
-(id)selectDelegateCallbackQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)waitedOperationQueue;
@end

