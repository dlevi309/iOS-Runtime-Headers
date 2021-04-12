/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <Foundation/NSOperation.h>

@class NSString;

@interface HealthExperience.AsynchronousOperation : NSOperation {

	 _autoFinishesOnCancel;
	 operationState;
	 workLock;

}

@property (readonly,nonatomic) BOOL asynchronous; 
@property (readonly,nonatomic) BOOL cancelled; 
@property (readonly,nonatomic) BOOL executing; 
@property (readonly,nonatomic) BOOL finished; 
@property (readonly,nonatomic) NSString * description; 
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(NSString *)description;
-(void)main;
-(BOOL)isExecuting;
-(void)cancel;
-(BOOL)isCancelled;
@end

