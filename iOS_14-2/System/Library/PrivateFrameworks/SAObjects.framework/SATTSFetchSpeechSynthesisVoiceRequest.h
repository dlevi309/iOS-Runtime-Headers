/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchSpeechSynthesisVoiceRequest;
+(id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)languageCode;
-(NSArray *)clientVoiceKeyList;
-(void)setClientVoiceKeyList:(NSArray *)arg1 ;
-(SATTSSpeechSynthesisVoice *)filteredVoiceKey;
-(void)setFilteredVoiceKey:(SATTSSpeechSynthesisVoice *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
@end

