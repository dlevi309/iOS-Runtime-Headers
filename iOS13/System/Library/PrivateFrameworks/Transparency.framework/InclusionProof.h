/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTInclusionProofVerifier, TransparencyManagedDataStore, NSData, MapEntry, LogEntry;

@interface InclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (nonatomic,copy) NSData * uriVrfoutput; 
@property (nonatomic,retain) MapEntry * mapEntry; 
@property (assign,nonatomic) BOOL hasMapEntry; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) BOOL hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(KTInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTInclusionProofVerifier *)arg1 ;
-(id)mapLeafWithError:(id*)arg1 ;
@end

