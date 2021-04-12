/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
*/


@class NSData, DCContext;

@interface DCCertificateGenerator : NSObject {

	NSData* _publicKey;
	DCContext* _context;

}
-(void)dealloc;
-(id)initWithContext:(id)arg1 publicKey:(id)arg2 ;
-(void)generateEncryptedCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(id)_encryptData:(id)arg1 serverSyncedDate:(id)arg2 error:(id*)arg3 ;
-(void)_generateCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)generateTTL;
-(BOOL)_isNSDate:(id)arg1 ;
-(int)keybagHandle;
@end

