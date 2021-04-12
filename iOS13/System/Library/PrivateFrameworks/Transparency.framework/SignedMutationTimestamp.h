/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(TransparencySignatureVerifier *)verifier;
-(void)setVerifier:(TransparencySignatureVerifier *)arg1 ;
-(id)parsedMutationWithError:(id*)arg1 ;
-(id)copyManagedObjectWithError:(id*)arg1 ;
@end

