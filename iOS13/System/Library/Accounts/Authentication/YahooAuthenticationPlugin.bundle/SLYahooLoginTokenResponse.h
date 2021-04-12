/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/YahooAuthenticationPlugin.bundle/YahooAuthenticationPlugin
*/


@class NSError, NSString;

@interface SLYahooLoginTokenResponse : NSObject {

	long long _statusCode;
	NSError* _error;
	NSString* _body;
	NSString* _loginToken;

}

@property (readonly) long long statusCode;               //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (readonly) NSString * body;                    //@synthesize body=_body - In the implementation block
@property (readonly) NSString * loginToken;              //@synthesize loginToken=_loginToken - In the implementation block
-(NSError *)error;
-(long long)statusCode;
-(NSString *)body;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)loginToken;
@end

