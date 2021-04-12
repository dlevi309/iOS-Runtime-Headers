/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFetchOperation.h>

@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation {

	NSMutableArray* _steps;
	NSMutableArray* _stepResults;
	NFMutexLock* _accessLock;

}

@property (nonatomic,retain) NSMutableArray * steps;                    //@synthesize steps=_steps - In the implementation block
@property (nonatomic,retain) NSMutableArray * stepResults;              //@synthesize stepResults=_stepResults - In the implementation block
@property (nonatomic,retain) NFMutexLock * accessLock;                  //@synthesize accessLock=_accessLock - In the implementation block
-(id)init;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)performOperation;
-(NSMutableArray *)stepResults;
-(void)setStepResults:(NSMutableArray *)arg1 ;
-(NFMutexLock *)accessLock;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
-(void)_performNextStep;
-(id)completeFetchOperation;
-(void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2 ;
-(void)addFetchStep:(SEL)arg1 ;
-(void)addNonCriticalFetchStep:(SEL)arg1 ;
@end

