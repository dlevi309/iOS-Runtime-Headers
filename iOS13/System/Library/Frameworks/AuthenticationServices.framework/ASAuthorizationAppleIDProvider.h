/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <libobjc.A.dylib/AKAuthorizationNotificationHandler.h>
#import <libobjc.A.dylib/ASAuthorizationProvider.h>

@class NSString;

@interface ASAuthorizationAppleIDProvider : NSObject <AKAuthorizationNotificationHandler, ASAuthorizationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)credentialStateDidChange:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)createRequest;
-(void)getCredentialStateForUserID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

