/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <libobjc.A.dylib/ASAuthorizationProvider.h>

@class NSURL, NSString;

@interface ASAuthorizationSingleSignOnProvider : NSObject <ASAuthorizationProvider> {

	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL canPerformAuthorization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)authorizationProviderWithIdentityProviderURL:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(BOOL)canPerformAuthorization;
-(id)createRequest;
@end

