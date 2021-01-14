/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTPatInclusionProofVerifier, TransparencyManagedDataStore, NSDictionary, LogEntry;

@interface PatInclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTPatInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) unsigned long long patLogBeginningMs; 
@property (readonly) unsigned long long tltLogBeginningMs; 
@property (readonly) NSDictionary * metadata; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) BOOL hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(NSDictionary *)metadata;
-(KTPatInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTPatInclusionProofVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
-(unsigned long long)patLogBeginningMs;
-(id)vrfPublicKeyWithError:(id*)arg1 ;
-(unsigned long long)tltLogBeginningMs;
-(id)patSigningKeyWithError:(id*)arg1 ;
@end

