/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyConsistencyProofVerifier, TransparencyManagedDataStore, NSNumber, NSDictionary, SignedLogHead, NSMutableArray;

@interface ConsistencyProofResponse_LogConsistencyResponse : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyConsistencyProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (retain) NSNumber * startRevision; 
@property (readonly) NSDictionary * metadata; 
@property (assign,nonatomic) int logType; 
@property (assign,nonatomic) int application; 
@property (nonatomic,retain) SignedLogHead * startSlh; 
@property (assign,nonatomic) BOOL hasStartSlh; 
@property (nonatomic,retain) SignedLogHead * endSlh; 
@property (assign,nonatomic) BOOL hasEndSlh; 
@property (nonatomic,retain) NSMutableArray * proofHashesArray; 
@property (nonatomic,readonly) unsigned long long proofHashesArray_Count; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(NSDictionary *)metadata;
-(TransparencyConsistencyProofVerifier *)verifier;
-(void)setVerifier:(TransparencyConsistencyProofVerifier *)arg1 ;
-(void)setResult:(unsigned long long)arg1 treeHead:(id)arg2 error:(id)arg3 ;
-(NSNumber *)startRevision;
-(void)setStartRevision:(NSNumber *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

