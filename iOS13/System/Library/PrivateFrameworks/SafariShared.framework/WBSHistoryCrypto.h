/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)decryptDictionary:(id)arg1 ;
-(id)encryptDictionary:(id)arg1 ;
-(id)initWithCryptographicKey:(id)arg1 salt:(id)arg2 ;
-(id)_createCryptographicKey;
-(id)_createOrLoadCryptographicKey;
-(NSData *)cryptographicKey;
@end

