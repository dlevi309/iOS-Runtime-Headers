/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <JITAppKit/MCLURLRequestRewriteRule.h>

@class NSRegularExpression, NSString, NSSet;

@interface MCLURLRewriteRule : MCLURLRequestRewriteRule {

	NSRegularExpression* _replacePattern;
	NSString* _replaceTemplate;
	NSSet* _ignoreHosts;

}
+(id)urlRewriteRuleFromHost:(id)arg1 toHost:(id)arg2 ignoreHosts:(id)arg3 ;
-(id)initWithMatchPattern:(id)arg1 replacePattern:(id)arg2 replaceTemplate:(id)arg3 ignoreHosts:(id)arg4 ;
-(void)rewriteURLRequest:(id)arg1 ;
@end

