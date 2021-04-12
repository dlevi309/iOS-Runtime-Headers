/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(id)af_speechModel;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

