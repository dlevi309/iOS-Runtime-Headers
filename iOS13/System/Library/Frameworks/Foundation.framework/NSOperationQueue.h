/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString;

@interface NSOperationQueue : NSObject <NSProgressReporting> {

	SCD_Struct_NS43 _iqp;

}

@property (readonly) NSProgress * progress; 
@property (assign) long long maxConcurrentOperationCount; 
@property (getter=isSuspended) BOOL suspended; 
@property (copy) NSString * name; 
@property (assign) long long qualityOfService; 
@property (assign) NSObject*<OS_dispatch_queue> underlyingQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)currentQueue;
+(id)mainQueue;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)addOperation:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id)operations;
-(NSProgress *)progress;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(unsigned long long)operationCount;
-(long long)maxConcurrentOperationCount;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(BOOL)isSuspended;
-(BOOL)overcommitsOperations;
-(void)setOvercommitsOperations:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(id)__graphDescription;
-(void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_fc_addUncancellableOperationWithBlock:(/*^block*/id)arg1 ;
@end

