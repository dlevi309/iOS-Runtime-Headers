/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSString, SAConfidenceScores;

@interface SAStartMultiUserTestRequest : SAStartRequest

@property (nonatomic,copy) NSString * expectedSelectedSharedUserId; 
@property (nonatomic,retain) SAConfidenceScores * voiceIDConfidenceScores; 
+(id)startMultiUserTestRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)expectedSelectedSharedUserId;
-(void)setExpectedSelectedSharedUserId:(NSString *)arg1 ;
-(SAConfidenceScores *)voiceIDConfidenceScores;
-(void)setVoiceIDConfidenceScores:(SAConfidenceScores *)arg1 ;
@end

