/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SAConfidenceScores : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * assetVersion; 
@property (nonatomic,copy) NSString * classifiedUser; 
@property (assign,nonatomic) long long processedAudioDurationMilliseconds; 
@property (nonatomic,copy) NSArray * scores; 
@property (nonatomic,copy) NSNumber * scoringSchemeVersion; 
@property (nonatomic,copy) NSString * thresholdType; 
@property (nonatomic,copy) NSString * userIdentityClassification; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)confidenceScoresWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)confidenceScores;
-(NSString *)assetVersion;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)scores;
-(void)setAssetVersion:(NSString *)arg1 ;
-(NSString *)classifiedUser;
-(void)setClassifiedUser:(NSString *)arg1 ;
-(long long)processedAudioDurationMilliseconds;
-(void)setProcessedAudioDurationMilliseconds:(long long)arg1 ;
-(NSNumber *)scoringSchemeVersion;
-(void)setScoringSchemeVersion:(NSNumber *)arg1 ;
-(NSString *)thresholdType;
-(void)setThresholdType:(NSString *)arg1 ;
-(NSString *)userIdentityClassification;
-(void)setUserIdentityClassification:(NSString *)arg1 ;
-(void)setScores:(NSArray *)arg1 ;
@end

