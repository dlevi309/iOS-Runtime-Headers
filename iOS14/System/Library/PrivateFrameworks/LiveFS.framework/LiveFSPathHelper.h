/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@protocol OS_dispatch_queue, NSFileProviderLiveItemCore;
@class NSObject, NSString, NSData, NSArray, NSMutableOrderedSet, NSMutableArray, NSError;

@interface LiveFSPathHelper : NSObject {

	NSObject*<OS_dispatch_queue> ourQueue;
	id<NSFileProviderLiveItemCore> ourMount;
	NSString* rootFileHandle;
	NSData* _attributes;
	NSArray* pathComponents;
	unsigned long long currentPathComponent;
	NSMutableOrderedSet* fileHandleStack;
	NSMutableArray* attributeStack;
	unsigned long long fileHandleStackCount;
	BOOL lookupCompleted;
	BOOL lookupInProgress;
	BOOL resolveTrailingSymlink;
	unsigned long long numberOfSymlinks;
	/*^block*/id completionHandler;
	NSError* _error;

}

@property (assign) BOOL resolveTrailingSymlink; 
@property (readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (readonly) NSString * fileHandle; 
@property (readonly) NSData * attributes; 
+(id)helperWithMount:(id)arg1 andPath:(id)arg2 ;
-(NSString *)fileHandle;
-(NSError *)error;
-(NSData *)attributes;
-(void)dealloc;
-(void)finalizeWithError:(id)arg1 ;
-(id)initWithMount:(id)arg1 andPath:(id)arg2 ;
-(id)popFileHandle;
-(id)peekFileHandle;
-(void)finalizeWithErrno:(int)arg1 ;
-(void)reclaimItem:(id)arg1 withContinuation:(/*^block*/id)arg2 ;
-(void)lookupNextComponent;
-(void)processReadLinkReplyForLink:(id)arg1 withResult:(int)arg2 linkString:(id)arg3 andAttributes:(id)arg4 ;
-(void)resolveSymlink:(id)arg1 ;
-(void)pushFileHandle:(id)arg1 attributes:(id)arg2 ;
-(id)currentFileHandle;
-(void)processLookupReplyWithResult:(int)arg1 item:(id)arg2 andAttributes:(id)arg3 ;
-(void)lookupWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)resolveTrailingSymlink;
-(void)setResolveTrailingSymlink:(BOOL)arg1 ;
@end

