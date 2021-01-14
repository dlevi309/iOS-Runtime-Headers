/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol OS_dispatch_queue, CXCallDirectoryNSExtensionManagerDelegate;
@class NSObject;

@interface CXCallDirectoryNSExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallDirectoryNSExtensionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _extensionMatchingContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryNSExtensionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                 //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id extensionMatchingContext;                                                //@synthesize extensionMatchingContext=_extensionMatchingContext - In the implementation block
+(id)baseExtensionMatchingAttributes;
-(id)extensionMatchingContext;
-(id)init;
-(id<CXCallDirectoryNSExtensionManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)beginMatchingExtensions;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXCallDirectoryNSExtensionManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setExtensionMatchingContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)_beginMatchingExtensionsIfNecessary;
-(void)_extensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)extensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(/*^block*/id)arg3 ;
@end

