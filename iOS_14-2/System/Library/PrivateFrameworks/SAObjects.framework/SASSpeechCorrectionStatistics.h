/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long alternativeSelectCount; 
@property (assign,nonatomic) long long characterChangeCount; 
@property (nonatomic,copy) NSString * correctionSource; 
@property (nonatomic,copy) NSString * correctionText; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechCorrectionStatistics;
+(id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(long long)alternativeSelectCount;
-(void)setAlternativeSelectCount:(long long)arg1 ;
-(long long)characterChangeCount;
-(void)setCharacterChangeCount:(long long)arg1 ;
-(NSString *)correctionSource;
-(id)encodedClassName;
-(void)setCorrectionSource:(NSString *)arg1 ;
-(NSString *)correctionText;
-(void)setCorrectionText:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
@end

