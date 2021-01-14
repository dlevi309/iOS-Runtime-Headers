/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSBundleInfo.h>

@protocol OS_dispatch_queue;
@class LSApplicationProxy, NSObject, FBSApplicationPlaceholderProgress, NSMutableSet, FBSApplicationLibrary;

@interface FBSApplicationPlaceholder : FBSBundleInfo {

	LSApplicationProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSApplicationPlaceholderProgress* _queue_progress;
	NSMutableSet* _queue_observers;
	FBSApplicationLibrary* _appLibrary;

}

@property (setter=_setProxy:,getter=_proxy,nonatomic,retain) LSApplicationProxy * proxy; 
@property (assign,nonatomic,__weak) FBSApplicationLibrary * appLibrary;                               //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,readonly) id<FBSApplicationPlaceholderProgress> progress; 
@property (getter=isPrioritizable,nonatomic,readonly) BOOL prioritizable; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
@property (getter=isResumable,nonatomic,readonly) BOOL resumable; 
@property (getter=isCancellable,nonatomic,readonly) BOOL cancellable; 
+(id)_sharedQueue;
+(id)_callOutQueue;
-(BOOL)isPausable;
-(unsigned long long)installType;
-(BOOL)isRestricted;
-(unsigned long long)installState;
-(unsigned long long)installPhase;
-(BOOL)isCancellable;
-(BOOL)isPrioritizable;
-(void)addObserver:(id)arg1 ;
-(id<FBSApplicationPlaceholderProgress>)progress;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(BOOL)pause;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSApplicationLibrary *)appLibrary;
-(BOOL)prioritize;
-(BOOL)isResumable;
-(void)_setProxy:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_canPerformAction:(unsigned long long)arg1 ;
-(BOOL)_performAction:(unsigned long long)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_dispatchToObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_queue_isCloudDemoted;
-(unsigned long long)_queue_supportedActions;
-(BOOL)_queue_canPerformAction:(unsigned long long)arg1 ;
-(void)_pauseWithResult:(/*^block*/id)arg1 ;
-(void)_resumeWithResult:(/*^block*/id)arg1 ;
-(void)_cancelWithResult:(/*^block*/id)arg1 ;
-(void)_prioritizeWithResult:(/*^block*/id)arg1 ;
-(void)_setProxy:(id)arg1 ;
-(void)_queue_setProxy:(id)arg1 force:(BOOL)arg2 ;
-(void)_reloadFromProxy:(id)arg1 ;
-(void)_queue_noteChangedSignificantly:(id)arg1 ;
-(void)_sendToObserversPlaceholderProgressDidUpdate;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
-(void)_sendToObserversPlaceholderDidChangeSignificantly;
-(BOOL)prioritizeWithResult:(/*^block*/id)arg1 ;
-(BOOL)pauseWithResult:(/*^block*/id)arg1 ;
-(BOOL)resumeWithResult:(/*^block*/id)arg1 ;
-(BOOL)cancelWithResult:(/*^block*/id)arg1 ;
-(void)_reloadProgress;
-(void)_noteChangedSignificantly;
-(void)setAppLibrary:(FBSApplicationLibrary *)arg1 ;
-(double)percentComplete;
-(void)removeObserver:(id)arg1 ;
-(id)_proxy;
-(id)succinctDescriptionBuilder;
-(BOOL)cancel;
-(BOOL)resume;
-(void)dealloc;
@end

