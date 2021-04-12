/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, FPDExtensionManager, FPDFilePresenter, NSDictionary;

@interface FPDPresenterManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _presenters;
	FPDExtensionManager* _extensionManager;
	FPDFilePresenter* _frontmostPresenter;

}

@property (nonatomic,readonly) NSDictionary * presenters;              //@synthesize presenters=_presenters - In the implementation block
-(void)removePresenter:(id)arg1 ;
-(NSDictionary *)presenters;
-(id)initWithExtensionManager:(id)arg1 ;
-(void)addPresenter:(id)arg1 itemID:(id)arg2 urlHint:(id)arg3 pid:(int)arg4 ;
-(void)signalPresentersForItemID:(id)arg1 ;
-(id)presentersForDomain:(id)arg1 ;
-(void)noteItemBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

