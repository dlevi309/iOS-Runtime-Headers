/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAUILParseableExpression, NSString;

@interface SAUILParsedExpression : SADomainObject

@property (nonatomic,retain) SAUILParseableExpression * parseableExpression; 
@property (nonatomic,copy) NSString * parsedOutput; 
+(id)parsedExpression;
+(id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)parsedOutput;
-(void)setParseableExpression:(SAUILParseableExpression *)arg1 ;
-(void)setParsedOutput:(NSString *)arg1 ;
-(SAUILParseableExpression *)parseableExpression;
@end

