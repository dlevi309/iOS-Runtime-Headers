/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSDictionary, InclusionProof, NSMutableArray, VRFWitness, NSData;

@interface QueryResponse : GPBMessage

@property (readonly) NSDictionary * metadata; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) InclusionProof * inclusionProof; 
@property (assign,nonatomic) BOOL hasInclusionProof; 
@property (nonatomic,retain) NSMutableArray * pendingSmtsArray; 
@property (nonatomic,readonly) unsigned long long pendingSmtsArray_Count; 
@property (nonatomic,retain) VRFWitness * uriWitness; 
@property (assign,nonatomic) BOOL hasUriWitness; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,retain) NSMutableArray * deviceWitnessesArray; 
@property (nonatomic,readonly) unsigned long long deviceWitnessesArray_Count; 
+(id)descriptor;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

