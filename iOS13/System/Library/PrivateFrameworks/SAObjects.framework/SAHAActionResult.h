/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAHAEntity, NSString, NSArray, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject

@property (nonatomic,retain) SAHAEntity * entity; 
@property (nonatomic,copy) NSString * outcome; 
@property (nonatomic,copy) NSArray * relatedEntityIds; 
@property (nonatomic,copy) NSString * requestActionId; 
@property (nonatomic,copy) NSString * resultAttribute; 
@property (nonatomic,retain) SAHAAttributeValue * resultValue; 
+(id)actionResult;
+(id)actionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)outcome;
-(void)setOutcome:(NSString *)arg1 ;
-(void)setEntity:(SAHAEntity *)arg1 ;
-(SAHAEntity *)entity;
-(id)encodedClassName;
-(NSArray *)relatedEntityIds;
-(void)setRelatedEntityIds:(NSArray *)arg1 ;
-(NSString *)requestActionId;
-(void)setRequestActionId:(NSString *)arg1 ;
-(NSString *)resultAttribute;
-(void)setResultAttribute:(NSString *)arg1 ;
-(SAHAAttributeValue *)resultValue;
-(void)setResultValue:(SAHAAttributeValue *)arg1 ;
@end

