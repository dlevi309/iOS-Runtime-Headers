/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, CUTWeakReference, NSObject;

@interface _IDSRealTimeEncryptionProxy : NSObject <IDSDaemonListenerProtocol> {

	NSString* _uniqueID;
	NSString* _accountID;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)sendPrekeyToGroup:(id)arg1 ;
-(void)requestPublicKeys;
-(void)sendMasterKeyMaterialToGroup:(id)arg1 ;
-(void)requestMasterKeyMaterialForGroup:(id)arg1 ;
-(void)sendMKMRecoveryRequestToGroup:(id)arg1 ;
-(void)resetKeysForGroup:(id)arg1 ;
@end

