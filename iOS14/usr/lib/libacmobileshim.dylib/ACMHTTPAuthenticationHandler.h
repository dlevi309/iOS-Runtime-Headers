/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)realm;
-(id)initWithContext:(id)arg1 ;
-(id)requestBody;
-(NSString *)policyVersion;
-(BOOL)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2 ;
-(BOOL)shouldValidateTGTs;
@end

