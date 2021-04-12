/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSArray, NSString;

@interface NSOperation : NSObject {

	SCD_Struct_NS51* _iop;

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
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingFinished;
+(id)keyPathsForValuesAffectingExecuting;
+(id)keyPathsForValuesAffectingCancelled;
+(BOOL)_removesDependenciesAfterFinish;
+(id)keyPathsForValuesAffectingIsCancelled;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingReady;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)currentOperation;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setQueuePriority:(long long)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)init;
-(void)start;
-(void)waitUntilFinished;
-(long long)queuePriority;
-(BOOL)isAsynchronous;
-(id)debugDescription;
-(NSArray *)dependencies;
-(BOOL)isFinished;
-(NSString *)name;
-(id)_implicitObservationInfo;
-(void*)observationInfo;
-(id)description;
-(void)removeDependency:(id)arg1 ;
-(/*^block*/id)_copyCompletionBlock;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(double)threadPriority;
-(void)addDependency:(id)arg1 ;
-(void)removeAllDependencies;
-(void)main;
-(BOOL)isReady;
-(id)__graphDescription:(unsigned long long)arg1 ;
-(void)setThreadPriority:(double)arg1 ;
-(BOOL)isExecuting;
-(void)setName:(NSString *)arg1 ;
-(long long)qualityOfService;
-(void)cancel;
-(BOOL)isConcurrent;
-(BOOL)isCancelled;
-(void)dealloc;
@end

