/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

