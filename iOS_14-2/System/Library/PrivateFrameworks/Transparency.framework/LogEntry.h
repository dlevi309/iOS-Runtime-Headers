/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyLogEntryVerifier, TransparencyManagedDataStore, NSDictionary, SignedLogHead, NSMutableArray, NSData;

@interface LogEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyLogEntryVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) NSDictionary * metadata; 
@property (assign,nonatomic) int logType; 
@property (nonatomic,retain) SignedLogHead * slh; 
@property (assign,nonatomic) BOOL hasSlh; 
@property (nonatomic,retain) NSMutableArray * hashesOfPeersInPathToRootArray; 
@property (nonatomic,readonly) unsigned long long hashesOfPeersInPathToRootArray_Count; 
@property (nonatomic,copy) NSData * nodeBytes; 
@property (assign,nonatomic) unsigned long long nodePosition; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(NSDictionary *)metadata;
-(TransparencyLogEntryVerifier *)verifier;
-(void)setVerifier:(TransparencyLogEntryVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
-(unsigned long long)verifyTLTEntryForPerApplicationLogHead:(id)arg1 error:(id*)arg2 ;
-(BOOL)setInclusionResult:(unsigned long long)arg1 signedLogHead:(id)arg2 error:(id*)arg3 ;
@end

