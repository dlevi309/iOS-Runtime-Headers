/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)interfaceForProtocol;
-(id)beginTransaction;
-(TKTokenID *)tokenID;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(NSData *)configurationData;
-(void)setConfigurationData:(NSData *)arg1 ;
-(NSString *)instanceID;
-(id)initWithTokenID:(id)arg1 configurationConnection:(id)arg2 ;
-(NSArray *)keychainItems;
-(void)setKeychainItems:(NSArray *)arg1 ;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
@end

