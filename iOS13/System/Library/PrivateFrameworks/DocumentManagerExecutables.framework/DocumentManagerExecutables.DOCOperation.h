/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/

#import <Foundation/NSOperation.h>

@interface DocumentManagerExecutables.DOCOperation : NSOperation {

	 synchronizationQueue;
	 callbackQueue;
	 _isFinished;
	 _isExecuting;
	 finishedBlock;

}

@property (readonly,nonatomic) BOOL asynchronous; 
@property (assign,nonatomic) BOOL finished; 
@property (assign,nonatomic) BOOL executing; 
-(id)init;
-(void)cancel;
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)setExecuting:(BOOL)arg1 ;
@end

