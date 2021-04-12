/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSArray, NSString;

@interface NSOperation : NSObject {

	SCD_Struct_NS42* _iop;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isConcurrent,readonly) BOOL concurrent; 
@property (getter=isAsynchronous,readonly) BOOL asynchronous; 
@property (getter=isReady,readonly) BOOL ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) long long queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingFinished;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingReady;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingExecuting;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingCancelled;
+(id)keyPathsForValuesAffectingIsCancelled;
+(id)currentOperation;
+(BOOL)_removesDependenciesAfterFinish;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(void)waitUntilFinished;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)start;
-(BOOL)isCancelled;
-(void)main;
-(void*)observationInfo;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)_implicitObservationInfo;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(NSArray *)dependencies;
-(id)__graphDescription:(unsigned long long)arg1 ;
-(long long)queuePriority;
-(void)setQueuePriority:(long long)arg1 ;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(/*^block*/id)_copyCompletionBlock;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(void)addDependency:(id)arg1 ;
-(void)removeDependency:(id)arg1 ;
-(void)removeAllDependencies;
@end

