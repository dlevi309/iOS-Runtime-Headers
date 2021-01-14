/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class TKTokenConfigurationConnection, NSArray, TKTokenID, NSString, NSData;

@interface TKTokenConfiguration : NSObject {

	TKTokenConfigurationConnection* _configurationConnection;
	NSArray* _keychainItems;
	TKTokenID* _tokenID;

}

@property (nonatomic,readonly) TKTokenID * tokenID;                 //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSString * instanceID; 
@property (nonatomic,copy) NSData * configurationData; 
@property (nonatomic,copy) NSArray * keychainItems; 
+(BOOL)_hasSeparateKeysAndCertificatesObjectIDSpace;
+(void)set_hasSeparateKeysAndCertificatesObjectIDSpace:(BOOL)arg1 ;
+(id)interfaceForProtocol;
-(TKTokenID *)tokenID;
-(NSString *)instanceID;
-(id)beginTransaction;
-(id)initWithTokenID:(id)arg1 configurationConnection:(id)arg2 ;
-(void)setConfigurationData:(NSData *)arg1 ;
-(NSArray *)keychainItems;
-(NSData *)configurationData;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(void)setKeychainItems:(NSArray *)arg1 ;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
@end

