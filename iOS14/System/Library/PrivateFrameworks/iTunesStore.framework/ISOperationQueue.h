/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) BOOL adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cancelAllOperations;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(long long)maxConcurrentOperationCount;
-(id)operations;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)addOperation:(id)arg1 ;
-(BOOL)adjustsMaxConcurrentOperationCount;
-(id)name;
-(long long)operationCount;
-(void)setName:(id)arg1 ;
-(void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1 ;
-(void)dealloc;
@end

