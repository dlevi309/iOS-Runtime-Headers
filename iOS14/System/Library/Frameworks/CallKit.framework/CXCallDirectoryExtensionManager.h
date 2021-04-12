/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol OS_dispatch_queue, CXCallDirectoryExtensionManagerDelegate;
@class CXCallDirectoryManager, NSObject;

@interface CXCallDirectoryExtensionManager : NSObject {

	int _storeExtensionsChangedNotifyToken;
	CXCallDirectoryManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallDirectoryExtensionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryExtensionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) CXCallDirectoryManager * manager;                                       //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) int storeExtensionsChangedNotifyToken;                                    //@synthesize storeExtensionsChangedNotifyToken=_storeExtensionsChangedNotifyToken - In the implementation block
-(id)init;
-(id<CXCallDirectoryExtensionManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXCallDirectoryExtensionManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(CXCallDirectoryManager *)manager;
-(void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)extensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_extensionsChanged;
-(void)beginObservingExtensions;
-(void)setEnabled:(BOOL)arg1 forExtension:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)storeExtensionsChangedNotifyToken;
-(void)setStoreExtensionsChangedNotifyToken:(int)arg1 ;
@end

