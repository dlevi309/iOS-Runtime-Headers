/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAsynchronous;
-(void)main;
-(void)cancel;
-(id)initWithRemoteTaskOperations:(id)arg1 ;
-(void)cancelSubOperations;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(id)initWithTaskClient:(id)arg1 requests:(id)arg2 ;
-(NSArray *)remoteTaskOperations;
@end

