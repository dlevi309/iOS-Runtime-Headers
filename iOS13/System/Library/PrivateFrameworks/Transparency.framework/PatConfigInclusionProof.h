/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTPatConfigInclusionProofVerifier, TransparencyManagedDataStore, LogEntry;

@interface PatConfigInclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTPatConfigInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) unsigned long long patLogBeginningMs; 
@property (readonly) unsigned long long tltLogBeginningMs; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) BOOL hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(KTPatConfigInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTPatConfigInclusionProofVerifier *)arg1 ;
-(id)vrfPublicKeyWithError:(id*)arg1 ;
-(unsigned long long)tltLogBeginningMs;
-(unsigned long long)patLogBeginningMs;
@end

