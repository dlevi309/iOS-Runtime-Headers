/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegAccountAuthorizationDelegate;
@class NSString;

@interface CNFRegAccountAuthorizationController : CNFRegAccountWebViewController {

	NSString* _authID;
	NSString* _authToken;
	id<CNFRegAccountAuthorizationDelegate> _delegate;

}

@property (nonatomic,copy) NSString * authID;                                              //@synthesize authID=_authID - In the implementation block
@property (nonatomic,copy) NSString * authToken;                                           //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) id<CNFRegAccountAuthorizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)authToken;
-(id<CNFRegAccountAuthorizationDelegate>)delegate;
-(void)setDelegate:(id<CNFRegAccountAuthorizationDelegate>)arg1 ;
-(NSString *)authID;
-(id)logName;
-(void)dealloc;
-(id)bagKey;
-(id)initWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3 ;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
-(void)setAuthID:(NSString *)arg1 ;
@end

