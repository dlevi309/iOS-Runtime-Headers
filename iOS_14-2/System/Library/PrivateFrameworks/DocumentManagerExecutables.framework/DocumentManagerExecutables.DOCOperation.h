/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(void)cancel;
@end

