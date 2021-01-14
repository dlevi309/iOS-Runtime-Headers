/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SADonateRankedQueriesToPortrait : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * queryDonations; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * utterance; 
+(id)donateRankedQueriesToPortrait;
+(id)donateRankedQueriesToPortraitWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)utterance;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setUtterance:(NSString *)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSArray *)queryDonations;
-(void)setQueryDonations:(NSArray *)arg1 ;
@end

