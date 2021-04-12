/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSMutableArray, NSData, Signature, PatConfigInclusionProof;

@interface PublicKeysResponse : GPBMessage

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * appLeafsArray; 
@property (nonatomic,readonly) unsigned long long appLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * tltLeafsArray; 
@property (nonatomic,readonly) unsigned long long tltLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * intermediatesArray; 
@property (nonatomic,readonly) unsigned long long intermediatesArray_Count; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (nonatomic,retain) Signature * vrfSignature; 
@property (assign,nonatomic) BOOL hasVrfSignature; 
@property (nonatomic,copy) NSData * vrfPublicKey; 
@property (assign,nonatomic) unsigned long long tltBeginningMs; 
@property (nonatomic,retain) PatConfigInclusionProof * patConfigProof; 
@property (assign,nonatomic) BOOL hasPatConfigProof; 
+(id)descriptor;
@end

