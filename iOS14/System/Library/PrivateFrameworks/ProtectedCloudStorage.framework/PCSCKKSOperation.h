/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCancelled:(BOOL)arg1 ;
-(void)completeOperation;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(BOOL)startOperation;
-(BOOL)isCancelled;
-(BOOL)checkDependencies;
-(void)addSuccessDependency:(id)arg1 ;
-(NSMutableArray *)successDependencies;
-(void)setSuccessDependencies:(NSMutableArray *)arg1 ;
@end

