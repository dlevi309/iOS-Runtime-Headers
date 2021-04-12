/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
*/


@class NSData, DCContext;

@interface DCCertificateGenerator : NSObject {

	NSData* _publicKey;
	DCContext* _context;

}
-(void)dealloc;
-(id)_encryptData:(id)arg1 error:(id*)arg2 ;
-(id)initWithContext:(id)arg1 publicKey:(id)arg2 ;
-(void)generateEncryptedCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(void)_generateCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(int)keybagHandle;
@end

