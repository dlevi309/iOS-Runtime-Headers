/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)attribute;
-(SAHAAttributeValue *)value;
-(void)setValue:(SAHAAttributeValue *)arg1 ;
-(id)groupIdentifier;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(void)setAttribute:(NSString *)arg1 ;
-(id)encodedClassName;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
-(NSArray *)executionFlags;
-(void)setExecutionFlags:(NSArray *)arg1 ;
-(BOOL)includeCompleteInformation;
-(void)setIncludeCompleteInformation:(BOOL)arg1 ;
@end

