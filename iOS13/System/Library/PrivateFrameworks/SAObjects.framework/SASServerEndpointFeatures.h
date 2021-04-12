/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (assign,nonatomic) double eosLikelihood; 
@property (assign,nonatomic) long long numOfWords; 
@property (nonatomic,copy) NSArray * pauseCounts; 
@property (assign,nonatomic) long long processedAudioDurationMs; 
@property (assign,nonatomic) double silenceProbability; 
@property (nonatomic,copy) NSString * taskName; 
@property (assign,nonatomic) long long trailingSilenceDuration; 
+(id)serverEndpointFeatures;
+(id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
-(NSArray *)pauseCounts;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(double)silenceProbability;
-(void)setSilenceProbability:(double)arg1 ;
-(BOOL)requiresResponse;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(long long)numOfWords;
-(void)setNumOfWords:(long long)arg1 ;
-(long long)processedAudioDurationMs;
-(void)setProcessedAudioDurationMs:(long long)arg1 ;
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
@end

