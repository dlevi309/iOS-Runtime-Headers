/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NFMutexLock *)accessLock;
-(void)performOperation;
-(NSMutableArray *)steps;
-(id)init;
-(void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2 ;
-(NSMutableArray *)stepResults;
-(void)_performNextStep;
-(void)addFetchStep:(SEL)arg1 ;
-(void)addNonCriticalFetchStep:(SEL)arg1 ;
-(void)setStepResults:(NSMutableArray *)arg1 ;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
-(id)completeFetchOperation;
-(void)setSteps:(NSMutableArray *)arg1 ;
@end

