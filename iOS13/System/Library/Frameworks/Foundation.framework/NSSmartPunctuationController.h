/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)smartQuotesEnabled;
-(NSSmartQuoteOptions *)smartQuoteOptions;
-(void)setSmartQuoteOptions:(NSSmartQuoteOptions *)arg1 ;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(BOOL)smartDashesEnabled;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(id<NSSmartPunctuationClient>)client;
-(void)setClient:(id<NSSmartPunctuationClient>)arg1 ;
-(void)clientDidReplaceRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
@end

