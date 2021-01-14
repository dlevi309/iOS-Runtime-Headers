/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSString, SAConfidenceScores;

@interface SAStartMultiUserTestRequest : SAStartRequest

@property (nonatomic,copy) NSString * expectedSelectedSharedUserId; 
@property (nonatomic,retain) SAConfidenceScores * voiceIDConfidenceScores; 
+(id)startMultiUserTestRequest;
+(id)startMultiUserTestRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)expectedSelectedSharedUserId;
-(void)setExpectedSelectedSharedUserId:(NSString *)arg1 ;
-(SAConfidenceScores *)voiceIDConfidenceScores;
-(void)setVoiceIDConfidenceScores:(SAConfidenceScores *)arg1 ;
@end

