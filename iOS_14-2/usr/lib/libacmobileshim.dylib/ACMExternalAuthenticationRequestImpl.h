/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMBaseAuthenticationRequestImpl.h>
#import <libobjc.A.dylib/ACMExternalAuthenticationRequest.h>

@class NSString, NSNumber;

@interface ACMExternalAuthenticationRequestImpl : ACMBaseAuthenticationRequestImpl <ACMExternalAuthenticationRequest>

@property (assign) BOOL useAlertView; 
@property (assign) BOOL userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) BOOL automaticallyCancelWhenSwitchingToBackground; 
@property (assign) BOOL canUseTouchID; 
@property (nonatomic,retain) NSString * realm; 
@property (nonatomic,retain) NSString * userName; 
@property (nonatomic,retain) NSNumber * appID; 
@property (nonatomic,retain) NSString * appIDKey; 
@property (nonatomic,retain) NSNumber * serverResponseTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
@end

