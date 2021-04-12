/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <Foundation/NSOperation.h>

@class NSError, NSMutableArray;

@interface PCSCKKSOperation : NSOperation {

	BOOL executing;
	BOOL finished;
	BOOL cancelled;
	NSError* _error;
	NSMutableArray* _successDependencies;

}

@property (retain) NSMutableArray * successDependencies;              //@synthesize successDependencies=_successDependencies - In the implementation block
@property (getter=isExecuting) BOOL executing; 
@property (getter=isFinished) BOOL finished; 
@property (getter=isCancelled) BOOL cancelled; 
@property (retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
+(id)operation:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSError *)error;
-(BOOL)isCancelled;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)startOperation;
-(void)completeOperation;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(BOOL)checkDependencies;
-(void)addSuccessDependency:(id)arg1 ;
-(NSMutableArray *)successDependencies;
-(void)setSuccessDependencies:(NSMutableArray *)arg1 ;
@end

