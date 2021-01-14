/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSDictionary, NSString;

@interface SASMultilingualDictationLanguageSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSDictionary * confidenceScoresByLanguage; 
@property (nonatomic,copy) NSString * languageDetected; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)multilingualDictationLanguageSelected;
+(id)multilingualDictationLanguageSelectedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)confidenceScoresByLanguage;
-(void)setConfidenceScoresByLanguage:(NSDictionary *)arg1 ;
-(NSString *)languageDetected;
-(void)setLanguageDetected:(NSString *)arg1 ;
@end

