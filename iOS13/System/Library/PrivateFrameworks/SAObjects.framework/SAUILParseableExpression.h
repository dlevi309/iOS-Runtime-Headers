/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SADomainObject, NSString;

@interface SAUILParseableExpression : SADomainObject

@property (nonatomic,retain) SADomainObject * context; 
@property (nonatomic,copy) NSString * expressionString; 
+(id)parseableExpression;
+(id)parseableExpressionWithDictionary:(id)arg1 context:(id)arg2 ;
-(SADomainObject *)context;
-(id)groupIdentifier;
-(void)setContext:(SADomainObject *)arg1 ;
-(id)encodedClassName;
-(NSString *)expressionString;
-(void)setExpressionString:(NSString *)arg1 ;
@end

