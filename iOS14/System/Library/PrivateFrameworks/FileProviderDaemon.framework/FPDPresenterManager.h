/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, FPDExtensionManager, FPDFilePresenter, NSDictionary;

@interface FPDPresenterManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _presenters;
	NSMutableDictionary* _promisedPresenters;
	unsigned long long nextPromiseID;
	FPDExtensionManager* _extensionManager;
	FPDFilePresenter* _frontmostPresenter;

}

@property (nonatomic,readonly) NSDictionary * presenters;              //@synthesize presenters=_presenters - In the implementation block
-(void)removePresenter:(id)arg1 ;
-(unsigned long long)promisePresenterWithID:(id)arg1 ;
-(void)signalPresentersForItemID:(id)arg1 ;
-(void)noteItemBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)forgetPromiseForPresenterWithID:(id)arg1 promiseID:(unsigned long long)arg2 ;
-(NSDictionary *)presenters;
-(void)addPresenter:(id)arg1 itemID:(id)arg2 urlHint:(id)arg3 pid:(int)arg4 promiseID:(unsigned long long)arg5 ;
-(id)presentersForDomain:(id)arg1 ;
-(id)initWithExtensionManager:(id)arg1 ;
@end

