/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASRecognition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * phrases; 
@property (assign,nonatomic) long long sentenceConfidence; 
@property (nonatomic,copy) NSArray * utterances; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognition;
+(id)recognitionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechPhrases;
-(id)af_speechUtterances;
-(id)af_correctionContextWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)af_userUtteranceValueWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)af_bestTextInterpretationWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)phrases;
-(void)setPhrases:(NSArray *)arg1 ;
-(id)encodedClassName;
-(long long)sentenceConfidence;
-(NSArray *)utterances;
-(void)setUtterances:(NSArray *)arg1 ;
-(void)setSentenceConfidence:(long long)arg1 ;
@end

