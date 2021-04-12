/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAAppCustomVocabulary : SADomainObject

@property (nonatomic,copy) NSString * intentSlotValue; 
@property (nonatomic,copy) NSString * vocabularyIdentifier; 
+(id)appCustomVocabulary;
+(id)appCustomVocabularyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)vocabularyIdentifier;
-(void)setVocabularyIdentifier:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)intentSlotValue;
-(void)setIntentSlotValue:(NSString *)arg1 ;
@end

