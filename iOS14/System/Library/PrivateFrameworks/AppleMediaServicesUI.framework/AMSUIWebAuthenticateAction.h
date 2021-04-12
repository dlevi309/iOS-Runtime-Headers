/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSAuthenticateRequest, AMSUIWebClientContext, NSString;

@interface AMSUIWebAuthenticateAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _makeCurrentAccount;
	BOOL _pauseTimeouts;
	AMSAuthenticateRequest* _request;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL pauseTimeouts;                            //@synthesize pauseTimeouts=_pauseTimeouts - In the implementation block
@property (assign,nonatomic) BOOL makeCurrentAccount;                       //@synthesize makeCurrentAccount=_makeCurrentAccount - In the implementation block
@property (nonatomic,retain) AMSAuthenticateRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(AMSAuthenticateRequest *)arg1 ;
-(AMSUIWebClientContext *)context;
-(AMSAuthenticateRequest *)request;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)pauseTimeouts;
-(BOOL)makeCurrentAccount;
-(void)setMakeCurrentAccount:(BOOL)arg1 ;
-(void)setPauseTimeouts:(BOOL)arg1 ;
@end

