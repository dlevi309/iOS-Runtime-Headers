/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <Foundation/NSOperation.h>

@class NSString;

@interface HealthExperience.AsynchronousOperation : NSOperation {

	 autoFinishesOnCancel;
	 operationState;
	 workLock;
	 didBeginWork;

}

@property (readonly,nonatomic) BOOL asynchronous; 
@property (readonly,nonatomic) BOOL cancelled; 
@property (readonly,nonatomic) BOOL executing; 
@property (readonly,nonatomic) BOOL finished; 
@property (readonly,nonatomic) NSString * description; 
-(id)init;
-(NSString *)description;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
@end

