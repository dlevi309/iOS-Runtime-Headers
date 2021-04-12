/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <Foundation/NSOperation.h>

@interface HealthExperience.AsyncOperation : NSOperation {

	 underlyingState;
	 stateLock;

}

@property (readonly,nonatomic) BOOL executing; 
@property (readonly,nonatomic) BOOL finished; 
@property (readonly,nonatomic) BOOL asynchronous; 
-(id)init;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
@end

