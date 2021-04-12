/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSDialogRequest, AMSUIWebClientContext, NSString;

@interface AMSUIWebDialogAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _pauseTimeouts;
	AMSDialogRequest* _request;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL pauseTimeouts;                           //@synthesize pauseTimeouts=_pauseTimeouts - In the implementation block
@property (nonatomic,retain) AMSDialogRequest * request;                   //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setRequest:(AMSDialogRequest *)arg1 ;
-(AMSDialogRequest *)request;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)pauseTimeouts;
-(id)runAction;
-(void)setPauseTimeouts:(BOOL)arg1 ;
@end

