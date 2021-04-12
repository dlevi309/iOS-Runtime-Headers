/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyLogEntryVerifier, TransparencyManagedDataStore, SignedLogHead, NSMutableArray, NSData;

@interface LogEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyLogEntryVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
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
-(BOOL)verifyWithError:(id*)arg1 ;
-(TransparencyLogEntryVerifier *)verifier;
-(void)setVerifier:(TransparencyLogEntryVerifier *)arg1 ;
-(BOOL)verifyTLTEntryForPerApplicationLogHead:(id)arg1 error:(id*)arg2 ;
@end

