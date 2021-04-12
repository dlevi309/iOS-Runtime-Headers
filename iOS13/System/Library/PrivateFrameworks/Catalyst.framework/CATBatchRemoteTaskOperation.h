/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATOperation.h>

@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {

	NSArray* mRemoteTasks;
	NSOperationQueue* mQueue;

}

@property (nonatomic,copy,readonly) NSArray * remoteTaskOperations; 
-(id)init;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithRemoteTaskOperations:(id)arg1 ;
-(void)cancelSubOperations;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(id)initWithTaskClient:(id)arg1 requests:(id)arg2 ;
-(NSArray *)remoteTaskOperations;
@end

