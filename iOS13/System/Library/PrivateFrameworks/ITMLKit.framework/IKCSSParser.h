/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

