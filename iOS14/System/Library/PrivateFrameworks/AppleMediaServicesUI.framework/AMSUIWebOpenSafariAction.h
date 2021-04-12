/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSURL, AMSUIWebClientContext, NSString, ASWebAuthenticationSession;

@interface AMSUIWebOpenSafariAction : NSObject <AMSUIWebActionRunnable> {

	NSURL* _URL;
	AMSUIWebClientContext* _context;
	NSString* _callbackScheme;
	ASWebAuthenticationSession* _session;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * callbackScheme;                         //@synthesize callbackScheme=_callbackScheme - In the implementation block
@property (nonatomic,retain) ASWebAuthenticationSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultFromURL:(id)arg1 error:(id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(ASWebAuthenticationSession *)session;
-(AMSUIWebClientContext *)context;
-(void)setSession:(ASWebAuthenticationSession *)arg1 ;
-(NSURL *)URL;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(NSString *)callbackScheme;
-(void)setCallbackScheme:(NSString *)arg1 ;
@end

