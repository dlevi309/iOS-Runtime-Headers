/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMAuthenticationResponseImpl.h>
#import <libobjc.A.dylib/ACMTicketVerificationResponse.h>

@class NSNumber, NSDictionary, NSError, NSString;

@interface ACMTicketVerificationResponseImpl : ACMAuthenticationResponseImpl <ACMTicketVerificationResponse>

@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@property (retain,readonly) NSNumber * personDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)personDSID;
@end

