/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SAConfidenceScores : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * assetVersion; 
@property (assign,nonatomic) long long processedAudioDurationMilliseconds; 
@property (nonatomic,copy) NSArray * scores; 
@property (nonatomic,copy) NSNumber * scoringSchemeVersion; 
@property (nonatomic,copy) NSString * thresholdType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)confidenceScores;
+(id)confidenceScoresWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)assetVersion;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAssetVersion:(NSString *)arg1 ;
-(long long)processedAudioDurationMilliseconds;
-(void)setProcessedAudioDurationMilliseconds:(long long)arg1 ;
-(NSArray *)scores;
-(void)setScores:(NSArray *)arg1 ;
-(NSNumber *)scoringSchemeVersion;
-(void)setScoringSchemeVersion:(NSNumber *)arg1 ;
-(NSString *)thresholdType;
-(void)setThresholdType:(NSString *)arg1 ;
@end

