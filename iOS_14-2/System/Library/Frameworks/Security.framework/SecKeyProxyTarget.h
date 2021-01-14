/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/Security-Structs.h>
#import <Security/SecKeyProxyProtocol.h>

@class NSData, SecKeyProxy;

@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol> {

	id _key;
	NSData* _certificate;
	SecKeyProxy* _publicKeyProxy;

}

@property (nonatomic,readonly) _SecKey* key; 
-(void)getBlockSizeWithReply:(/*^block*/id)arg1 ;
-(void)getAttributesWithReply:(/*^block*/id)arg1 ;
-(void)getPublicKey:(/*^block*/id)arg1 ;
-(void)getExternalRepresentationWithReply:(/*^block*/id)arg1 ;
-(void)getDescriptionWithReply:(/*^block*/id)arg1 ;
-(void)getAlgorithmIDWithReply:(/*^block*/id)arg1 ;
-(void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithKey:(id)arg1 certificate:(id)arg2 ;
-(void)initializeWithReply:(/*^block*/id)arg1 ;
-(_SecKey*)key;
@end

