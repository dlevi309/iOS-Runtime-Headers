/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)recognitionWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)recognition;
-(id)af_speechPhrases;
-(id)af_speechUtterances;
-(id)af_correctionContextWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)af_userUtteranceValueWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)af_bestTextInterpretationWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)utterances;
-(NSArray *)phrases;
-(id)encodedClassName;
-(void)setPhrases:(NSArray *)arg1 ;
-(long long)sentenceConfidence;
-(void)setUtterances:(NSArray *)arg1 ;
-(void)setSentenceConfidence:(long long)arg1 ;
@end

