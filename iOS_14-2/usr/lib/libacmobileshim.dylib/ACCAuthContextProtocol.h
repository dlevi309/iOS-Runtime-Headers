/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class ACFPrincipal, ACFMessage, NSNumber, NSString, NSDate, NSMutableDictionary, NSData;


@protocol ACCAuthContextProtocol <NSObject>
@property (retain) ACFPrincipal * principal; 
@property (retain) ACFMessage * request; 
@property (assign) NSNumber * authenticationType; 
@property (retain) NSNumber * appID; 
@property (retain) NSString * encryptionHash; 
@property (retain) NSString * nonce; 
@property (retain) NSString * oldUserKey; 
@property (retain) NSString * currentUserKey; 
@property (retain) NSString * appIDKey; 
@property (retain) NSString * dsKeyVersion; 
@property (retain) NSString * sessionToken; 
@property (retain) NSString * tokenVersion; 
@property (retain) NSDate * creationDate; 
@property (nonatomic,readonly) NSMutableDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * tokenSourceString; 
@property (nonatomic,retain) NSData * encryptionKey; 
@property (nonatomic,retain) NSData * initializationVector; 
@property (nonatomic,retain) NSNumber * personID; 
@property (nonatomic,retain) NSString * selectedDeviceId; 
@property (nonatomic,retain) NSString * selectedDeviceType; 
@property (nonatomic,retain) NSString * twoStepVerificationCode; 
@property (nonatomic,retain) NSString * serviceName; 
@property (nonatomic,retain) NSString * recoveryKey; 
@property (nonatomic,retain) NSString * clientSecretTokenHmac; 
@property (nonatomic,retain) NSNumber * clientSecretCreateDate; 
@property (nonatomic,retain) NSNumber * touchIDSupport; 
@property (nonatomic,readonly) NSString * xmlTokenSourceString; 
@optional
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(id)arg1;
-(NSString *)serviceName;
-(void)setServiceName:(id)arg1;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecretCreateDate:(id)arg1;
-(NSNumber *)touchIDSupport;
-(void)setClientSecretTokenHmac:(id)arg1;
-(void)setTouchIDSupport:(id)arg1;
-(NSString *)clientSecretTokenHmac;
-(NSString *)xmlTokenSourceString;

@required
+(id)authContextWithRequest:(id)arg1;
-(NSData *)encryptionKey;
-(void)setNonce:(id)arg1;
-(void)setRequest:(id)arg1;
-(NSNumber *)authenticationType;
-(NSNumber *)appID;
-(void)setCreationDate:(id)arg1;
-(NSData *)initializationVector;
-(void)setAuthenticationType:(id)arg1;
-(ACFMessage *)request;
-(void)setSessionToken:(id)arg1;
-(NSString *)sessionToken;
-(NSDate *)creationDate;
-(void)setPrincipal:(id)arg1;
-(void)setEncryptionKey:(id)arg1;
-(NSNumber *)personID;
-(ACFPrincipal *)principal;
-(NSString *)nonce;
-(void)setPersonID:(id)arg1;
-(void)setInitializationVector:(id)arg1;
-(void)setAppID:(id)arg1;
-(NSMutableDictionary *)parametersDictionary;
-(void)setAppIDKey:(id)arg1;
-(NSString *)appIDKey;
-(NSString *)dsKeyVersion;
-(void)setDsKeyVersion:(id)arg1;
-(void)setEncryptionHash:(id)arg1;
-(void)setOldUserKey:(id)arg1;
-(void)setCurrentUserKey:(id)arg1;
-(void)setTokenVersion:(id)arg1;
-(NSString *)tokenVersion;
-(NSString *)encryptionHash;
-(NSString *)currentUserKey;
-(NSString *)oldUserKey;
-(NSString *)selectedDeviceId;
-(NSString *)selectedDeviceType;
-(NSString *)twoStepVerificationCode;
-(NSString *)tokenSourceString;
-(void)setSelectedDeviceId:(id)arg1;
-(void)setSelectedDeviceType:(id)arg1;
-(void)setTwoStepVerificationCode:(id)arg1;

@end

