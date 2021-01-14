/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)applicationInitializationContextWithParameters:(id)arg1 ;
-(id)init;
-(id)_remoteTarget;
-(id)_applicationSupportServiceEndpoint;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidate;
-(void)requestPasscodeUnlockUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

