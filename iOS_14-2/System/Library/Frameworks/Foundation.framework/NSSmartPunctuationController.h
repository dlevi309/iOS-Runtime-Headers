/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol NSSmartPunctuationClient;
#import <Foundation/Foundation-Structs.h>
@class NSSmartQuoteOptions;

@interface NSSmartPunctuationController : NSObject {

	id<NSSmartPunctuationClient> _client;
	NSSmartQuoteOptions* _options;
	unsigned long long _types;

}

@property (assign) id<NSSmartPunctuationClient> client; 
@property (copy) NSSmartQuoteOptions * smartQuoteOptions; 
@property (assign) BOOL smartQuotesEnabled; 
@property (assign) BOOL smartDashesEnabled; 
-(BOOL)smartDashesEnabled;
-(id<NSSmartPunctuationClient>)client;
-(void)setClient:(id<NSSmartPunctuationClient>)arg1 ;
-(id)init;
-(BOOL)smartQuotesEnabled;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(void)clientDidReplaceRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(NSSmartQuoteOptions *)smartQuoteOptions;
-(void)setSmartQuoteOptions:(NSSmartQuoteOptions *)arg1 ;
-(void)dealloc;
@end

