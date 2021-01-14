/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray, NSDictionary;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * endpoint; 
@property (nonatomic,copy) NSArray * featuresAtEndpoint; 
@property (nonatomic,copy) NSArray * orderedContext; 
@property (assign,nonatomic) long long packetCount; 
@property (nonatomic,copy) NSDictionary * serverFeatureLatencyDistribution; 
@property (assign,nonatomic) double totalAudioRecorded; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)finishSpeech;
+(id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)featuresAtEndpoint;
-(void)setFeaturesAtEndpoint:(NSArray *)arg1 ;
-(NSDictionary *)serverFeatureLatencyDistribution;
-(void)setServerFeatureLatencyDistribution:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(double)totalAudioRecorded;
-(void)setTotalAudioRecorded:(double)arg1 ;
-(id)encodedClassName;
-(long long)packetCount;
-(void)setPacketCount:(long long)arg1 ;
-(BOOL)requiresResponse;
-(void)setEndpoint:(NSString *)arg1 ;
-(NSString *)endpoint;
-(void)setOrderedContext:(NSArray *)arg1 ;
-(NSArray *)orderedContext;
@end

