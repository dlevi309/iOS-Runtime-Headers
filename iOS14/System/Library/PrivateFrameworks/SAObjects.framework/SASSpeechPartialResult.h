/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSArray * tokens; 
+(id)createUsingPhrases:(id)arg1 andUtterances:(id)arg2 ;
+(id)speechPartialResult;
+(id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_tokens;
-(id)af_correctionContext;
-(id)af_speechModel;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(void)setTokens:(NSArray *)arg1 ;
-(NSArray *)tokens;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)language;
@end

