/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString;

@interface NSOperationQueue : NSObject <NSProgressReporting> {

	SCD_Struct_NS52 _iqp;

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
+(id)mainQueue;
+(id)currentQueue;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancelAllOperations;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(long long)maxConcurrentOperationCount;
-(id)operations;
-(BOOL)isSuspended;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)addOperation:(id)arg1 ;
-(void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)_fc_addUncancellableOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)waitUntilAllOperationsAreFinished;
-(NSString *)name;
-(unsigned long long)operationCount;
-(NSString *)description;
-(void)setOvercommitsOperations:(BOOL)arg1 ;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(BOOL)overcommitsOperations;
-(id)__graphDescription;
-(void)setName:(NSString *)arg1 ;
-(long long)qualityOfService;
-(void)dealloc;
@end

