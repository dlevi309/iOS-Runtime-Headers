/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSRealTimeEncryptionProxy;

@interface IDSRealTimeEncryptionProxy : NSObject {

	_IDSRealTimeEncryptionProxy* _internal;

}
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(void)requestPublicKeys;
-(void)sendPrekeyToGroup:(id)arg1 ;
-(void)sendMasterKeyMaterialToGroup:(id)arg1 ;
-(void)requestMasterKeyMaterialForGroup:(id)arg1 ;
-(void)sendMKMRecoveryRequestToGroup:(id)arg1 ;
-(void)resetKeysForGroup:(id)arg1 ;
-(void)dealloc;
@end

