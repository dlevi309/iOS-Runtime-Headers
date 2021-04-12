/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/TransparencyLogClient.h>

@class NSURL;

@interface KTLogClient : TransparencyLogClient {

	BOOL _configured;
	NSURL* _queryURI;
	NSURL* _consistencyProofURI;
	NSURL* _publicKeysURI;
	double _expirationTime;

}

@property (retain) NSURL * queryURI;                         //@synthesize queryURI=_queryURI - In the implementation block
@property (retain) NSURL * consistencyProofURI;              //@synthesize consistencyProofURI=_consistencyProofURI - In the implementation block
@property (retain) NSURL * publicKeysURI;                    //@synthesize publicKeysURI=_publicKeysURI - In the implementation block
@property (assign) BOOL configured;                          //@synthesize configured=_configured - In the implementation block
@property (assign) double expirationTime;                    //@synthesize expirationTime=_expirationTime - In the implementation block
+(id)configBagURL;
+(id)configBagRequest;
+(id)formatEventName:(id)arg1 state:(id)arg2 ;
+(id)formatEventName:(id)arg1 application:(id)arg2 state:(id)arg3 ;
-(void)configure:(/*^block*/id)arg1 ;
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
-(BOOL)validateConfigEntries:(id)arg1 error:(id*)arg2 ;
-(void)setQueryURI:(NSURL *)arg1 ;
-(void)setConsistencyProofURI:(NSURL *)arg1 ;
-(void)setPublicKeysURI:(NSURL *)arg1 ;
-(BOOL)validateConfigBagCertificates:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateConfigBagSignature:(id)arg1 error:(id*)arg2 ;
-(id)readConfigFromDisk:(id*)arg1 ;
-(BOOL)validateConfigBagEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)processConfigBagData:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeConfigToDisk:(id)arg1 error:(id*)arg2 ;
-(BOOL)configurationExpired;
-(BOOL)configureWithDisk:(id*)arg1 ;
-(BOOL)configureFromNetworkBag:(id)arg1 error:(id*)arg2 ;
-(NSURL *)publicKeysURI;
-(NSURL *)queryURI;
-(BOOL)handleQueryResponse:(id)arg1 fetchError:(id)arg2 application:(id)arg3 error:(id*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSURL *)consistencyProofURI;
-(id)copyConfigurationBag:(id*)arg1 ;
-(void)clearState:(id*)arg1 ;
-(void)fetchPublicKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchQuery:(id)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadQuery:(id)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadConsistencyProof:(id)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadPublicKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

