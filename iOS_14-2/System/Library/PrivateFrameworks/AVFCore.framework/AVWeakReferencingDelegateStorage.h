/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVDelegateStorage.h>

@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference, NSString;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {

	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	OpaqueConcurrentAccessDetectorRef _detectorForWeakReferenceToDelegate;
	AVWeakReference* _weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) id delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)_delegate;
-(id)init;
-(id)delegate;
-(void)_setDelegateViaWeakReference:(id)arg1 ;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 synchronouslyIfDelegateQueueIsQueue:(id)arg2 ;
-(void)_collectUncollectables;
-(void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2 ;
-(void)dealloc;
@end

