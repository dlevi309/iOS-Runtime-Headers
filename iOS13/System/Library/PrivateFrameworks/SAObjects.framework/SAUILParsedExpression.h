/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SAUILParseableExpression *)parseableExpression;
-(void)setParseableExpression:(SAUILParseableExpression *)arg1 ;
-(NSString *)parsedOutput;
-(void)setParsedOutput:(NSString *)arg1 ;
@end

