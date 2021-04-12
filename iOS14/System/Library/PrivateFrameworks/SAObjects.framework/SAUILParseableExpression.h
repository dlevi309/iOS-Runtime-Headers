/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SADomainObject, NSString;

@interface SAUILParseableExpression : SADomainObject

@property (nonatomic,retain) SADomainObject * context; 
@property (nonatomic,copy) NSString * expressionString; 
+(id)parseableExpression;
+(id)parseableExpressionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SADomainObject *)context;
-(NSString *)expressionString;
-(void)setExpressionString:(NSString *)arg1 ;
-(void)setContext:(SADomainObject *)arg1 ;
@end

