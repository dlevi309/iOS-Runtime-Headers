/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) BOOL adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(id)init;
-(void)dealloc;
-(id)name;
-(void)addOperation:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id)operations;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(long long)operationCount;
-(long long)maxConcurrentOperationCount;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)cancelAllOperations;
-(BOOL)adjustsMaxConcurrentOperationCount;
-(void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1 ;
@end

