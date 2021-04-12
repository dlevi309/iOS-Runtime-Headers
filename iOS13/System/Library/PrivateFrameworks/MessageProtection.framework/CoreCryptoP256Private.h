/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <libobjc.A.dylib/P256PrivateKeyProtocol.h>

@class NSString;

@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol> {

	ccec_full_ctx* _full_key;

}

@property (assign) ccec_full_ctx* full_key;                         //@synthesize full_key=_full_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generate;
-(void)dealloc;
-(id)initWithKey:(ccec_full_ctx*)arg1 ;
-(id)publicKey;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)keychainData;
-(id)keyAgreement:(id)arg1 error:(id*)arg2 ;
-(ccec_full_ctx*)full_key;
-(void)setFull_key:(ccec_full_ctx*)arg1 ;
@end

