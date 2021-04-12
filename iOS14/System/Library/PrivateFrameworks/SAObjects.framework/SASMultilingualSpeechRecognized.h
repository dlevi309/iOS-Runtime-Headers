/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL multilingualDisabled; 
@property (nonatomic,copy) NSDictionary * speechRecognizedByLanguage; 
+(id)multilingualSpeechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)multilingualSpeechRecognized;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)speechRecognizedByLanguage;
-(BOOL)multilingualDisabled;
-(void)setMultilingualDisabled:(BOOL)arg1 ;
-(void)setSpeechRecognizedByLanguage:(NSDictionary *)arg1 ;
@end

