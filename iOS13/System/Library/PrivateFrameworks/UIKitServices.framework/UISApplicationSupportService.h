/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <UIKit/UISApplicationSupportXPCServerInterface.h>

@protocol UISApplicationSupportServiceDelegate;
@class BSServiceConnectionListener, FBSSerialQueue, UISApplicationInitializationContext, NSMutableArray, NSString;

@interface UISApplicationSupportService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationSupportXPCServerInterface> {

	os_unfair_lock_s _lock;
	BSServiceConnectionListener* _listener;
	FBSSerialQueue* _targetQueue;
	id<UISApplicationSupportServiceDelegate> _lock_delegate;
	UISApplicationInitializationContext* _lock_defaultContext;
	NSMutableArray* _lock_launchPendedRequests;
	BOOL _lock_started;
	BOOL _lock_finishedLaunching;
	struct {
		unsigned defaultContext : 1;
		unsigned overrideInitialize : 1;
		unsigned initializeClientSync : 1;
		unsigned initializeClientAsync : 1;
		unsigned initializeClientLegacy : 1;
		unsigned requestPasscodeUnlockUI : 1;
		unsigned destroyScenes : 1;
	}  _lock_delegateFlags;

}

@property (readonly) BOOL hasFinishedLaunching; 
@property (copy) UISApplicationInitializationContext * defaultContext;              //@synthesize lock_defaultContext=_lock_defaultContext - In the implementation block
@property (retain) id<UISApplicationSupportServiceDelegate> delegate;               //@synthesize lock_delegate=_lock_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<UISApplicationSupportServiceDelegate>)delegate;
-(void)setDelegate:(id<UISApplicationSupportServiceDelegate>)arg1 ;
-(id)_delegate;
-(void)start;
-(UISApplicationInitializationContext *)defaultContext;
-(void)_setDelegate:(id)arg1 ;
-(oneway void)requestPasscodeUnlockUIWithCompletion:(/*^block*/id)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)initializeClientWithCompletion:(/*^block*/id)arg1 ;
-(void)destroyScenesPersistentIdentifiers:(id)arg1 animationType:(id)arg2 destroySessions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_initWithDelegate:(id)arg1 targetQueue:(id)arg2 ;
-(void)_pendRequestUntilLaunch:(/*^block*/id)arg1 ;
-(void)setDefaultContext:(UISApplicationInitializationContext *)arg1 ;
-(BOOL)hasFinishedLaunching;
@end

