/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray, NSNumber;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushCert;
	SecKeyRef _identityKey;
	NSData* _identityCert;
	SecKeyRef _identityPublicKey;
	SecKeyRef _pushKey;
	SecKeyRef _pushPublicKey;
	NSData* _pushToken;
	NSString* _selfURI;
	NSMutableArray* _certDataArray;
	NSMutableArray* _publicKeyArray;
	NSMutableArray* _privateKeyArray;
	NSMutableArray* _userIDArray;
	NSNumber* _serverTimestamp;
	NSNumber* _serverTimestampReceivedDate;

}

@property (assign,nonatomic) SecKeyRef pushPrivateKey;                    //@synthesize pushKey=_pushKey - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPublicKey;                     //@synthesize pushPublicKey=_pushPublicKey - In the implementation block
@property (nonatomic,copy) NSData * pushCertificate;                      //@synthesize pushCert=_pushCert - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSString * selfURI;                            //@synthesize selfURI=_selfURI - In the implementation block
@property (nonatomic,copy) NSMutableArray * certDataArray;                //@synthesize certDataArray=_certDataArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * publicKeyArray;               //@synthesize publicKeyArray=_publicKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * privateKeyArray;              //@synthesize privateKeyArray=_privateKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * userIDArray;                  //@synthesize userIDArray=_userIDArray - In the implementation block
@property (assign,nonatomic) SecKeyRef identityPrivateKey;                //@synthesize identityKey=_identityKey - In the implementation block
@property (assign,nonatomic) SecKeyRef identityPublicKey;                 //@synthesize identityPublicKey=_identityPublicKey - In the implementation block
@property (nonatomic,copy) NSData * IDCertificate;                        //@synthesize identityCert=_identityCert - In the implementation block
@property (readonly) BOOL wantsIDSProtocolVersion; 
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
-(id)init;
-(BOOL)wantsHTTPHeaders;
-(void)setServerTimestamp:(id)arg1 ;
-(long long)responseCommand;
-(BOOL)wantsBinaryPush;
-(id)retryCountKey;
-(BOOL)wantsIDSServer;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBagKey;
-(BOOL)wantsSignature;
-(BOOL)wantsBodySignature;
-(SecKeyRef)pushPrivateKey;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(NSData *)pushCertificate;
-(NSMutableArray *)certDataArray;
-(void)setCertDataArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)publicKeyArray;
-(void)setPublicKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)privateKeyArray;
-(void)setPrivateKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)userIDArray;
-(void)setUserIDArray:(NSMutableArray *)arg1 ;
-(SecKeyRef)identityPrivateKey;
-(SecKeyRef)identityPublicKey;
-(NSData *)IDCertificate;
-(id)serverTimestampReceivedDate;
-(void)setServerTimestampReceivedDate:(id)arg1 ;
-(id)additionalMessageHeaders;
-(id)additionalMessageHeadersForOutgoingPush;
-(NSString *)selfURI;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(void)setPushCertificate:(NSData *)arg1 ;
-(BOOL)wantsIDSProtocolVersion;
-(void)setIdentityPrivateKey:(SecKeyRef)arg1 ;
-(void)setIdentityPublicKey:(SecKeyRef)arg1 ;
-(void)setIDCertificate:(NSData *)arg1 ;
-(void)setSelfURI:(NSString *)arg1 ;
-(void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(SecKeyRef)arg3 publicKey:(SecKeyRef)arg4 ;
-(long long)command;
-(id)serverTimestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

