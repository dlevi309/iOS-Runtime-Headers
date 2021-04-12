/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVDelegateStorage.h>

@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference, NSString;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {

	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
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
-(id)init;
-(void)dealloc;
-(id)delegate;
-(id)_delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)_collectUncollectables;
-(void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2 ;
-(void)_setDelegateViaWeakReference:(id)arg1 ;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 synchronouslyIfDelegateQueueIsQueue:(id)arg2 ;
@end

