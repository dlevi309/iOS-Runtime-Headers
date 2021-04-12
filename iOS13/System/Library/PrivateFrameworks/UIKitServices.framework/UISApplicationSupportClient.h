/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, NSString;

@interface UISApplicationSupportClient : NSObject <BSInvalidatable> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queue_invalidated;
	BSServiceConnection* _queue_connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)applicationInitializationContext;
-(void)requestPasscodeUnlockUIWithCompletion:(/*^block*/id)arg1 ;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteTarget;
@end

