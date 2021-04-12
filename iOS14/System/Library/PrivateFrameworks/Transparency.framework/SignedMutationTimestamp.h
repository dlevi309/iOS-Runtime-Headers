/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencySignatureVerifier, TransparencyManagedDataStore, NSString, NSData, Signature;

@interface SignedMutationTimestamp : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencySignatureVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (retain) NSString * application; 
@property (nonatomic,copy) NSData * mutation; 
@property (nonatomic,retain) Signature * signature; 
@property (assign,nonatomic) BOOL hasSignature; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setApplication:(NSString *)arg1 ;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(NSString *)application;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(TransparencySignatureVerifier *)verifier;
-(void)setVerifier:(TransparencySignatureVerifier *)arg1 ;
-(id)parsedMutationWithError:(id*)arg1 ;
-(id)copyManagedObjectWithError:(id*)arg1 ;
@end

