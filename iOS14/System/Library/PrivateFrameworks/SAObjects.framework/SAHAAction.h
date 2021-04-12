/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSArray, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSArray * executionFlags; 
@property (assign,nonatomic) long long executionOrder; 
@property (assign,nonatomic) BOOL includeCompleteInformation; 
@property (nonatomic,retain) SAHAAttributeValue * value; 
+(id)action;
+(id)actionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)attribute;
-(void)setValue:(SAHAAttributeValue *)arg1 ;
-(void)setAttribute:(NSString *)arg1 ;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
-(NSArray *)executionFlags;
-(void)setExecutionFlags:(NSArray *)arg1 ;
-(BOOL)includeCompleteInformation;
-(void)setIncludeCompleteInformation:(BOOL)arg1 ;
-(SAHAAttributeValue *)value;
@end

