/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyMapEntryVerifier, TransparencyManagedDataStore, NSDictionary, SignedMapHead, NSMutableArray, NSData;

@interface MapEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyMapEntryVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) NSDictionary * metadata; 
@property (nonatomic,retain) SignedMapHead * smh; 
@property (assign,nonatomic) BOOL hasSmh; 
@property (nonatomic,retain) NSMutableArray * hashesOfPeersInPathToRootArray; 
@property (nonatomic,readonly) unsigned long long hashesOfPeersInPathToRootArray_Count; 
@property (nonatomic,copy) NSData * mapLeaf; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(NSDictionary *)metadata;
-(TransparencyMapEntryVerifier *)verifier;
-(void)setVerifier:(TransparencyMapEntryVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

