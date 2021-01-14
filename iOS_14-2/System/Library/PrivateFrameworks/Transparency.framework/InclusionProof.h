/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTInclusionProofVerifier, TransparencyManagedDataStore, NSDictionary, NSData, MapEntry, LogEntry;

@interface InclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) NSDictionary * metadata; 
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
-(void)setMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(NSDictionary *)metadata;
-(KTInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTInclusionProofVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
-(id)mapLeafWithError:(id*)arg1 ;
@end

