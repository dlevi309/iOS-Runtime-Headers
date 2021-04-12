/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)requiresResponse;
-(long long)numOfWords;
-(NSString *)taskName;
-(NSArray *)pauseCounts;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(long long)processedAudioDurationMs;
-(void)setProcessedAudioDurationMs:(long long)arg1 ;
-(double)silenceProbability;
-(void)setSilenceProbability:(double)arg1 ;
-(void)setTaskName:(NSString *)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
-(void)setNumOfWords:(long long)arg1 ;
@end

