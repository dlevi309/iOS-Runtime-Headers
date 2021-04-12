/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMKeychainTGTStoragePolicy.h>

@class NSData;

@interface ACMExternalTGTStoragePolicy : ACMKeychainTGTStoragePolicy {

	NSData* _secret;

}

@property (nonatomic,readonly) id<ACFCryptographProtocol> cryptograph; 
@property (nonatomic,readonly) NSData * secret;                                     //@synthesize secret=_secret - In the implementation block
-(id)preferences;
-(NSData *)secret;
-(id)service;
-(int)storeItemWithInfo:(id)arg1 ;
-(id)tokenDataWithDictionary:(id)arg1 ;
-(id)encryptTokenData:(id)arg1 ;
-(id)decryptTokenData:(id)arg1 ;
-(id)tokenDictionaryWithData:(id)arg1 ;
-(void)resetSecret;
-(BOOL)performRemoveTokenWithPrincipal:(id)arg1 service:(id)arg2 ;
-(id<ACFCryptographProtocol>)cryptograph;
-(id)searchItemWithInfo:(id)arg1 ;
@end

