/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * definitionEntries; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * partOfSpeech; 
@property (nonatomic,copy) NSArray * synonyms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionGroup;
+(id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setOrigin:(NSString *)arg1 ;
-(NSString *)origin;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)synonyms;
-(NSArray *)definitionEntries;
-(void)setDefinitionEntries:(NSArray *)arg1 ;
-(NSString *)partOfSpeech;
-(void)setPartOfSpeech:(NSString *)arg1 ;
-(void)setSynonyms:(NSArray *)arg1 ;
@end

