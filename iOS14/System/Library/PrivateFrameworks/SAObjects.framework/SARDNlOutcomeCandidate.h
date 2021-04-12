/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSString;

@interface SARDNlOutcomeCandidate : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * nlIntentHierarchyContainerProto; 
@property (nonatomic,copy) NSString * resultCandidateId; 
+(id)nlOutcomeCandidate;
+(id)nlOutcomeCandidateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSData *)nlIntentHierarchyContainerProto;
-(void)setNlIntentHierarchyContainerProto:(NSData *)arg1 ;
@end

