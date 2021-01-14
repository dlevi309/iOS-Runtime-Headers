/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)executionEndTime;
-(double)executionStartTime;
-(id)init;
-(BOOL)postambleAdded;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)setCreationTime:(double)arg1 ;
-(double)timeSpentWaitingInQueue;
-(id)description;
-(double)executionTime;
-(void)setPostambleAdded:(BOOL)arg1 ;
-(double)creationTime;
-(void)setExecutionEndTime:(double)arg1 ;
-(void)setExecutionStartTime:(double)arg1 ;
@end

