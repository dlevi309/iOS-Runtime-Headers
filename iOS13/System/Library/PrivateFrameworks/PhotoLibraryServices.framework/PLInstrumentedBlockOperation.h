/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <Foundation/NSBlockOperation.h>

@interface PLInstrumentedBlockOperation : NSBlockOperation {

	BOOL _postambleAdded;
	double _creationTime;
	double _executionStartTime;
	double _executionEndTime;

}

@property (assign,nonatomic) double creationTime;                           //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) double executionStartTime;                     //@synthesize executionStartTime=_executionStartTime - In the implementation block
@property (assign,nonatomic) double executionEndTime;                       //@synthesize executionEndTime=_executionEndTime - In the implementation block
@property (assign,nonatomic) BOOL postambleAdded;                           //@synthesize postambleAdded=_postambleAdded - In the implementation block
@property (nonatomic,readonly) double timeSpentWaitingInQueue; 
@property (nonatomic,readonly) double executionTime; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(double)creationTime;
-(void)setCreationTime:(double)arg1 ;
-(double)executionTime;
-(double)timeSpentWaitingInQueue;
-(double)executionStartTime;
-(void)setExecutionStartTime:(double)arg1 ;
-(double)executionEndTime;
-(void)setExecutionEndTime:(double)arg1 ;
-(BOOL)postambleAdded;
-(void)setPostambleAdded:(BOOL)arg1 ;
@end

