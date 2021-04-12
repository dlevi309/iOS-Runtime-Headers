/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMHTTPHandler.h>

@class NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {

	NSString* _policyVersion;
	NSDate* _startInvocationDate;
	NSString* _realm;

}

@property (nonatomic,readonly) NSString * policyVersion; 
@property (nonatomic,readonly) NSString * realm;                      //@synthesize realm=_realm - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(NSString *)realm;
-(id)requestBody;
-(NSString *)policyVersion;
-(BOOL)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2 ;
-(BOOL)shouldValidateTGTs;
@end

