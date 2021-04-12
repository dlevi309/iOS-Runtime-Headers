/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAIntentGroupCustomVocabularyEntity.h>

@class NSString;

@interface SAIntentGroupCustomVocabularyPerson : AceObject <SAIntentGroupCustomVocabularyEntity>

@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * relationship; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)customVocabularyPerson;
+(id)customVocabularyPersonWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)groupIdentifier;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)relationship;
-(void)setFirstName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)nickname;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setNickname:(NSString *)arg1 ;
@end

