/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, SATTSSpeechSynthesisVoice, NSString;

@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * clientVoiceKeyList; 
@property (nonatomic,retain) SATTSSpeechSynthesisVoice * filteredVoiceKey; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)fetchSpeechSynthesisVoiceRequest;
+(id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)clientVoiceKeyList;
-(void)setClientVoiceKeyList:(NSArray *)arg1 ;
-(SATTSSpeechSynthesisVoice *)filteredVoiceKey;
-(void)setFilteredVoiceKey:(SATTSSpeechSynthesisVoice *)arg1 ;
@end

