/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest {

	SLFacebookRegistrationInfo* _registrationInfo;

}
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)_urlEncodedString:(id)arg1 ;
-(id)_tokenSecret;
-(void)_prepareRequestForValidation;
-(id)_sha1HashForString:(id)arg1 ;
-(id)initWithRegistrationInfo:(id)arg1 ;
@end

