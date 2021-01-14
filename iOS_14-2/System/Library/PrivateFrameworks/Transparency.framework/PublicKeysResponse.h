/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSDictionary, NSMutableArray, NSData, Signature, PatInclusionProof, LogEntry;

@interface PublicKeysResponse : GPBMessage

@property (readonly) NSDictionary * metadata; 
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
@property (nonatomic,retain) PatInclusionProof * patConfigProof; 
@property (assign,nonatomic) BOOL hasPatConfigProof; 
@property (nonatomic,retain) LogEntry * tltConfigProof; 
@property (assign,nonatomic) BOOL hasTltConfigProof; 
+(id)descriptor;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

