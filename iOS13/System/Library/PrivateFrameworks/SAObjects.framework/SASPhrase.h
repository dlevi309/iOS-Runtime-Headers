/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASPhrase : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * interpretations; 
@property (assign,nonatomic) BOOL lowConfidence; 
@property (assign,nonatomic) BOOL speechRepairApplied; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phrase;
+(id)phraseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechInterpretations;
-(id)groupIdentifier;
-(NSArray *)interpretations;
-(id)encodedClassName;
-(void)setInterpretations:(NSArray *)arg1 ;
-(BOOL)lowConfidence;
-(void)setLowConfidence:(BOOL)arg1 ;
-(BOOL)speechRepairApplied;
-(void)setSpeechRepairApplied:(BOOL)arg1 ;
@end

