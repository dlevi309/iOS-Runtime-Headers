/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)phraseWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)phrase;
-(id)af_speechInterpretations;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)interpretations;
-(void)setInterpretations:(NSArray *)arg1 ;
-(BOOL)lowConfidence;
-(void)setLowConfidence:(BOOL)arg1 ;
-(BOOL)speechRepairApplied;
-(void)setSpeechRepairApplied:(BOOL)arg1 ;
@end

