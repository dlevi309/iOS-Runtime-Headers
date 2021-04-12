/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@class SSMutableAuthenticationContext, SSAuthenticateResponse, SSAuthenticationContext, NSString;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {

	SSMutableAuthenticationContext* _authenticationContext;
	SSAuthenticateResponse* _authenticateResponse;
	id _parentViewController;

}

@property (retain) id parentViewController;                                        //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) SSAuthenticateResponse * authenticateResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_copyErrorForAuthenticateResponse:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)run;
-(id)parentViewController;
-(void)setParentViewController:(id)arg1 ;
-(id)initWithAuthenticationContext:(id)arg1 ;
-(SSAuthenticateResponse *)authenticateResponse;
-(SSAuthenticationContext *)authenticationContext;
-(id)uniqueKey;
-(id)authenticatedAccountDSID;
-(void)_handleAuthenticateResponse:(id)arg1 ;
@end

