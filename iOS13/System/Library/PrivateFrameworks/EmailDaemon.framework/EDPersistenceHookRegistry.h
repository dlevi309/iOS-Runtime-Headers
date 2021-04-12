/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


#import <EmailDaemon/EmailDaemon-Structs.h>
@interface EDPersistenceHookRegistry : NSObject {

	os_unfair_lock_s _lock;
	CFDictionaryRef _hookRespondersBySelector;
	CFDictionaryRef _methodSignaturesBySelector;

}
+(id)_proxiedProtocols;
-(id)init;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(void)registerMessageChangeHookResponder:(id)arg1 ;
-(void)registerProtectedDataReconciliationHookResponder:(id)arg1 ;
-(void)unregisterAllHookResponders;
-(void)registerAccountChangeHookResponder:(id)arg1 ;
-(void)unregisterHookResponder:(id)arg1 ;
-(void)registerActivityHookResponder:(id)arg1 ;
-(void)registerMessageDeliveryHookResponder:(id)arg1 ;
-(void)registerMailboxChangeHookResponder:(id)arg1 ;
-(void)_initializeMethodSignatures;
-(void)_registerSelector:(SEL)arg1 types:(const char*)arg2 ;
-(void)_registerHookResponder:(id)arg1 withMethodDescription:(objc_method_description)arg2 ;
-(id)_copyRespondersForSelector:(SEL)arg1 ;
-(void)_messageRespondersWithInvocation:(id)arg1 ;
-(void)_registerHookResponder:(id)arg1 protocol:(id)arg2 ;
-(void)registerDatabaseChangeHookResponder:(id)arg1 ;
-(void)registerThreadChangeHookResponder:(id)arg1 ;
-(void)registerSearchableIndexHookResponder:(id)arg1 ;
-(void)registerMessageReadHookResponder:(id)arg1 ;
@end

