/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


#import <EmailDaemon/EmailDaemon-Structs.h>
@interface EDPersistenceHookRegistry : NSObject {

	os_unfair_lock_s _lock;
	CFDictionaryRef _hookRespondersBySelector;
	CFDictionaryRef _methodSignaturesBySelector;

}
+(id)_proxiedProtocols;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)registerMessageChangeHookResponder:(id)arg1 ;
-(void)unregisterAllHookResponders;
-(void)_forwardStackInvocation:(id)arg1 ;
-(void)registerProtectedDataReconciliationHookResponder:(id)arg1 ;
-(void)registerDatabaseChangeHookResponder:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)registerAccountChangeHookResponder:(id)arg1 ;
-(void)registerActivityHookResponder:(id)arg1 ;
-(void)registerMessageDeliveryHookResponder:(id)arg1 ;
-(void)unregisterHookResponder:(id)arg1 ;
-(void)registerMailboxChangeHookResponder:(id)arg1 ;
-(void)_initializeMethodSignatures;
-(void)_registerSelector:(SEL)arg1 types:(const char*)arg2 ;
-(void)_registerHookResponder:(id)arg1 withMethodDescription:(objc_method_description)arg2 ;
-(id)_copyRespondersForSelector:(SEL)arg1 ;
-(void)_messageRespondersWithInvocation:(id)arg1 ;
-(void)_registerHookResponder:(id)arg1 protocol:(id)arg2 ;
-(void)registerThreadChangeHookResponder:(id)arg1 ;
-(void)registerSearchableIndexHookResponder:(id)arg1 ;
-(void)registerMessageReadHookResponder:(id)arg1 ;
@end

