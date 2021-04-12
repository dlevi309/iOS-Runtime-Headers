/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class VRFPublicKey, TransparencyTrustedKeyStore, NSString, TransparencyManagedDataStore, NSData, NSDictionary, NSArray;

@interface KTApplicationPublicKeyStore : NSObject {

	int _vrfType;
	VRFPublicKey* _vrfKey;
	TransparencyTrustedKeyStore* _appKeyStore;
	TransparencyTrustedKeyStore* _tltKeyStore;
	unsigned long long _patLogBeginningMs;
	unsigned long long _tltLogBeginningMs;
	NSString* _application;
	TransparencyManagedDataStore* _dataStore;
	NSData* _patConfigProof;
	NSDictionary* _trustedAppSigningKeys;
	NSArray* _trustedAppLeafs;
	NSDictionary* _trustedTltSigningKeys;
	NSArray* _trustedTltLeafs;
	NSArray* _trustedIntermediates;

}

@property (retain) NSString * application;                                 //@synthesize application=_application - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;               //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSData * patConfigProof;                                //@synthesize patConfigProof=_patConfigProof - In the implementation block
@property (retain) VRFPublicKey * vrfKey;                                  //@synthesize vrfKey=_vrfKey - In the implementation block
@property (assign) int vrfType;                                            //@synthesize vrfType=_vrfType - In the implementation block
@property (retain) NSDictionary * trustedAppSigningKeys;                   //@synthesize trustedAppSigningKeys=_trustedAppSigningKeys - In the implementation block
@property (retain) NSArray * trustedAppLeafs;                              //@synthesize trustedAppLeafs=_trustedAppLeafs - In the implementation block
@property (retain) NSDictionary * trustedTltSigningKeys;                   //@synthesize trustedTltSigningKeys=_trustedTltSigningKeys - In the implementation block
@property (retain) NSArray * trustedTltLeafs;                              //@synthesize trustedTltLeafs=_trustedTltLeafs - In the implementation block
@property (retain) NSArray * trustedIntermediates;                         //@synthesize trustedIntermediates=_trustedIntermediates - In the implementation block
@property (retain) TransparencyTrustedKeyStore * appKeyStore;              //@synthesize appKeyStore=_appKeyStore - In the implementation block
@property (retain) TransparencyTrustedKeyStore * tltKeyStore;              //@synthesize tltKeyStore=_tltKeyStore - In the implementation block
@property (assign) unsigned long long tltLogBeginningMs;                   //@synthesize tltLogBeginningMs=_tltLogBeginningMs - In the implementation block
@property (assign) unsigned long long patLogBeginningMs;                   //@synthesize patLogBeginningMs=_patLogBeginningMs - In the implementation block
@property (readonly) BOOL ready; 
-(BOOL)ready;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(id)createTLTApplicationPublicKeyStore;
-(int)vrfType;
-(VRFPublicKey *)vrfKey;
-(TransparencyTrustedKeyStore *)appKeyStore;
-(TransparencyTrustedKeyStore *)tltKeyStore;
-(void)clearState:(id*)arg1 ;
-(NSDictionary *)trustedAppSigningKeys;
-(NSDictionary *)trustedTltSigningKeys;
-(void)setVrfKey:(VRFPublicKey *)arg1 ;
-(void)setPatConfigProof:(NSData *)arg1 ;
-(void)setTrustedAppSigningKeys:(NSDictionary *)arg1 ;
-(void)setTrustedTltSigningKeys:(NSDictionary *)arg1 ;
-(void)setTrustedIntermediates:(NSArray *)arg1 ;
-(void)setTltLogBeginningMs:(unsigned long long)arg1 ;
-(void)setPatLogBeginningMs:(unsigned long long)arg1 ;
-(unsigned long long)tltLogBeginningMs;
-(unsigned long long)patLogBeginningMs;
-(BOOL)verifyCertificates:(id)arg1 intermediates:(id)arg2 application:(id)arg3 error:(id*)arg4 ;
-(id)copyVRFKeyFromConfigProof:(id)arg1 saveTreeHeads:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)detectEpochChangeAndResetData:(unsigned long long)arg1 patLogBeginningMs:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSData *)patConfigProof;
-(BOOL)processKeyData:(id)arg1 tltLeafs:(id)arg2 intermediates:(id)arg3 patConfigProof:(id)arg4 saveTreeHeads:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)processPublicKeysResponse:(id)arg1 error:(id*)arg2 ;
-(void)startLogBeginTimesSampler;
-(BOOL)processDiskState:(id)arg1 error:(id*)arg2 ;
-(void)setAppKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(void)setTltKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(id)copyKeyStoreState;
-(id)initWithApplication:(id)arg1 dataStore:(id)arg2 response:(id)arg3 error:(id*)arg4 ;
-(id)initWithApplication:(id)arg1 dataStore:(id)arg2 diskState:(id)arg3 error:(id*)arg4 ;
-(void)setVrfType:(int)arg1 ;
-(NSArray *)trustedAppLeafs;
-(void)setTrustedAppLeafs:(NSArray *)arg1 ;
-(NSArray *)trustedTltLeafs;
-(void)setTrustedTltLeafs:(NSArray *)arg1 ;
-(NSArray *)trustedIntermediates;
@end

