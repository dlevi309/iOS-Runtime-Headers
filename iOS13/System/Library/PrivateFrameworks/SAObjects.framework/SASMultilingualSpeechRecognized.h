/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL multilingualDisabled; 
@property (nonatomic,copy) NSDictionary * speechRecognizedByLanguage; 
+(id)multilingualSpeechRecognized;
+(id)multilingualSpeechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)speechRecognizedByLanguage;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)multilingualDisabled;
-(void)setMultilingualDisabled:(BOOL)arg1 ;
-(void)setSpeechRecognizedByLanguage:(NSDictionary *)arg1 ;
@end

