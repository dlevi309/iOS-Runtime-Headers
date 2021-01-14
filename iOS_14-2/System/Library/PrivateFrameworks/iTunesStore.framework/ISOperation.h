/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <Foundation/NSOperation.h>

@protocol ISOperationDelegate;
@class NSError, NSLock, NSRunLoop, SSOperationProgress, NSString, NSArray, NSMutableArray;

@interface ISOperation : NSOperation {

	id<ISOperationDelegate> _delegate;
	NSError* _error;
	NSLock* _lock;
	NSRunLoop* _operationRunLoop;
	ISOperation* _parentOperation;
	SSOperationProgress* _progress;
	BOOL _shouldMessageMainThread;
	NSString* _powerAssertionIdentifier;
	NSArray* _serializationLockIdentifiers;
	NSMutableArray* _subOperations;
	BOOL _shouldRunWithBackgroundPriority;
	BOOL _stopped;
	BOOL _success;

}

@property (retain) ISOperation * parentOperation;                           //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) SSOperationProgress * progress; 
@property (retain) NSRunLoop * operationRunLoop;                            //@synthesize operationRunLoop=_operationRunLoop - In the implementation block
@property (copy) NSArray * serializationLockIdentifiers; 
@property (__weak) id<ISOperationDelegate> delegate; 
@property (assign) BOOL shouldMessageMainThread; 
@property (retain) NSString * powerAssertionIdentifier;                     //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (readonly) NSString * uniqueKey; 
@property (assign) BOOL shouldRunWithBackgroundPriority;                    //@synthesize shouldRunWithBackgroundPriority=_shouldRunWithBackgroundPriority - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign) BOOL success;                                            //@synthesize success=_success - In the implementation block
@property (readonly) long long progressWeight; 
-(void)sendCompletionCallback:(id)arg1 ;
-(void)setScriptOptions:(id)arg1 ;
-(NSString *)uniqueKey;
-(BOOL)success;
-(void)unlock;
-(void)setSuccess:(BOOL)arg1 ;
-(void)run;
-(SSOperationProgress *)progress;
-(id)init;
-(id<ISOperationDelegate>)delegate;
-(void)lock;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(ISOperation *)parentOperation;
-(void)_main:(BOOL)arg1 ;
-(void)setDelegate:(id<ISOperationDelegate>)arg1 ;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
-(NSString *)powerAssertionIdentifier;
-(void)main;
-(id)authenticatedAccountDSID;
-(void)_keepAliveTimer:(id)arg1 ;
-(void)run:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)stopRunLoop;
-(BOOL)runSubOperation:(id)arg1 returningError:(id*)arg2 ;
-(void)setShouldMessageMainThread:(BOOL)arg1 ;
-(BOOL)loadURLBagWithContext:(id)arg1 returningError:(id*)arg2 ;
-(id)loadedURLBagWithContext:(id)arg1 returningError:(id*)arg2 ;
-(void)_addSubOperation:(id)arg1 ;
-(void)dispatchCompletionBlock;
-(void)_removeSubOperation:(id)arg1 ;
-(NSRunLoop *)operationRunLoop;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)arg1 ;
-(BOOL)shouldRunWithBackgroundPriority;
-(void)_failAfterException;
-(id)copyActivePowerAssertionIdentifiers;
-(NSArray *)serializationLockIdentifiers;
-(BOOL)shouldMessageMainThread;
-(void)delegateDispatch:(/*^block*/id)arg1 ;
-(void)_sendErrorToDelegate:(id)arg1 ;
-(void)setOperationRunLoop:(NSRunLoop *)arg1 ;
-(void)sendProgressToDelegate;
-(void)_sendWillStartToDelegate;
-(void)_sendSuccessToDelegate;
-(long long)progressWeight;
-(int)runRunLoopUntilStopped;
-(BOOL)runSubOperation:(id)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
-(id)copySerializationLocks;
-(void)releasePowerAssertionsDuringBlock:(/*^block*/id)arg1 ;
-(void)sendDidTakeSerializationLocks;
-(void)setSerializationLockIdentifiers:(NSArray *)arg1 ;
-(void)setShouldRunWithBackgroundPriority:(BOOL)arg1 ;
-(unsigned long long)authenticatedAccountCredentialSource;
-(id)loadedURLBagWithContext:(id)arg1 accountDSID:(id)arg2 returningError:(id*)arg3 ;
-(BOOL)copyAccountID:(id*)arg1 credentialSource:(unsigned long long*)arg2 byHandlingAuthenticateResponse:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)copyAccountID:(id*)arg1 credentialSource:(unsigned long long*)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)loadSoftwareMapReturningError:(id*)arg1 ;
@end

