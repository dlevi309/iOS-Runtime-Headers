/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@interface IKCSSParser : NSObject
+(id)parse:(id)arg1 ;
+(id)consumeComponentValue:(id)arg1 ;
+(id)parseStylesheet:(id)arg1 ;
+(id)parseRulesList:(id)arg1 ;
+(id)consumeRules:(id)arg1 topLevel:(BOOL)arg2 ;
+(id)consumeQualifiedRule:(id)arg1 ;
+(id)consumeAtRule:(id)arg1 ;
+(id)consumeSimpleBlock:(id)arg1 startTokenType:(long long)arg2 ;
+(id)consumeDeclarationList:(id)arg1 ;
+(id)consumeFunction:(id)arg1 fromToken:(id)arg2 ;
+(id)consumeDeclaration:(id)arg1 ;
@end

