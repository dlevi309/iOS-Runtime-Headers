/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)stringIsEqual:(id)arg1 to:(id)arg2 ;
+(BOOL)dateIsEqual:(id)arg1 to:(id)arg2 ;
+(id)errorNameForCode:(long long)arg1 ;
+(BOOL)numberIsEqual:(id)arg1 to:(id)arg2 ;
+(id)getFileMetadata:(const char*)arg1 forKey:(id)arg2 ;
+(id)beginTransactionWithName:(id)arg1 ;
+(void)endTransaction:(id)arg1 withName:(id)arg2 ;
+(id)sharedSUCoreDomainAppending:(id)arg1 ;
+(BOOL)dataIsEqual:(id)arg1 to:(id)arg2 ;
+(BOOL)setFileMetadata:(const char*)arg1 forKey:(id)arg2 value:(id)arg3 ;
+(BOOL)dictionaryIsEqual:(id)arg1 to:(id)arg2 ;
+(BOOL)arrayIsEqual:(id)arg1 to:(id)arg2 ;
+(id)limitString:(id)arg1 toMaxLength:(unsigned long long)arg2 providingSubstitutionMap:(id)arg3 ;
+(BOOL)objectIsEqual:(id)arg1 to:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)commonDomain;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(id)init;
-(void)useDomain:(id)arg1 ;
-(id)selectCompletionQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)waitedOperationQueue;
-(void)setBaseDomain:(NSString *)arg1 ;
-(void)setFilesystemBaseDir:(NSString *)arg1 ;
-(NSString *)filesystemBaseDir;
-(id)buildError:(long long)arg1 underlying:(id)arg2 description:(id)arg3 ;
-(id)commonFilesystemBaseDir;
-(id)selectDelegateCallbackQueue:(id)arg1 ;
-(NSString *)baseDomain;
-(void)useFilesystemBaseDir:(id)arg1 ;
@end

