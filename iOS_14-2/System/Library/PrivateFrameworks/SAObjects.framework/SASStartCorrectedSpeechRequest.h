/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (assign,nonatomic) long long combinedRank; 
@property (assign,nonatomic) double combinedScore; 
@property (nonatomic,copy) NSString * interactionId; 
@property (assign,nonatomic) BOOL onDeviceUtterancesPresent; 
@property (assign,nonatomic) long long originalRank; 
@property (assign,nonatomic) double originalScore; 
@property (nonatomic,copy) NSString * previousUtterance; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * utteranceSource; 
+(id)startCorrectedSpeechRequest;
+(id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)combinedRank;
-(void)setCombinedRank:(long long)arg1 ;
-(double)combinedScore;
-(void)setCombinedScore:(double)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(BOOL)onDeviceUtterancesPresent;
-(void)setOnDeviceUtterancesPresent:(BOOL)arg1 ;
-(long long)originalRank;
-(void)setOriginalRank:(long long)arg1 ;
-(double)originalScore;
-(void)setOriginalScore:(double)arg1 ;
-(NSString *)previousUtterance;
-(void)setPreviousUtterance:(NSString *)arg1 ;
-(NSString *)utteranceSource;
-(void)setUtteranceSource:(NSString *)arg1 ;
@end

