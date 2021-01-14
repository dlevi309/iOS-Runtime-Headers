/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSData;

@interface WBSHistoryCrypto : NSObject {

	NSData* _cachedCryptographicKey;
	NSData* _salt;

}

@property (nonatomic,readonly) NSData * salt;                          //@synthesize salt=_salt - In the implementation block
@property (nonatomic,readonly) NSData * cryptographicKey; 
-(id)init;
-(NSData *)salt;
-(NSData *)cryptographicKey;
-(id)initWithCryptographicKey:(id)arg1 salt:(id)arg2 ;
-(id)encryptDictionary:(id)arg1 ;
-(id)_createOrLoadCryptographicKey;
-(id)decryptDictionary:(id)arg1 ;
-(id)_createCryptographicKey;
@end

