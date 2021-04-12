/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_callOutQueue;
+(id)_sharedQueue;
-(void)dealloc;
-(BOOL)cancel;
-(BOOL)pause;
-(BOOL)resume;
-(BOOL)prioritize;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<FBSApplicationPlaceholderProgress>)progress;
-(id)_proxy;
-(BOOL)isCancellable;
-(BOOL)isPausable;
-(BOOL)isPrioritizable;
-(BOOL)isRestricted;
-(unsigned long long)installType;
-(unsigned long long)installState;
-(unsigned long long)installPhase;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)percentComplete;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
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
-(FBSApplicationLibrary *)appLibrary;
-(void)_prioritizeWithResult:(/*^block*/id)arg1 ;
-(void)_queue_setProxy:(id)arg1 force:(BOOL)arg2 ;
-(void)_reloadFromProxy:(id)arg1 ;
-(void)_queue_noteChangedSignificantly:(id)arg1 ;
-(void)_sendToObserversPlaceholderProgressDidUpdate;
-(void)_sendToObserversPlaceholderDidChangeSignificantly;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
-(BOOL)isResumable;
-(BOOL)prioritizeWithResult:(/*^block*/id)arg1 ;
-(BOOL)pauseWithResult:(/*^block*/id)arg1 ;
-(BOOL)resumeWithResult:(/*^block*/id)arg1 ;
-(BOOL)cancelWithResult:(/*^block*/id)arg1 ;
-(void)_setProxy:(id)arg1 ;
-(void)_reloadProgress;
-(void)_noteChangedSignificantly;
-(void)setAppLibrary:(FBSApplicationLibrary *)arg1 ;
@end

