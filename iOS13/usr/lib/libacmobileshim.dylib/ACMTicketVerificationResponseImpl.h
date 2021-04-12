/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMAuthenticationResponseImpl.h>
#import <libobjc.A.dylib/ACMTicketVerificationResponse.h>

@class NSNumber, NSDictionary, NSError, NSString;

@interface ACMTicketVerificationResponseImpl : ACMAuthenticationResponseImpl <ACMTicketVerificationResponse>

@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSNumber * personDSID; 
-(NSNumber *)personDSID;
@end

