/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSDialogRequest, AMSUIWebClientContext, NSArray, NSString;

@interface AMSUIWebDialogAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _pauseTimeouts;
	AMSDialogRequest* _request;
	AMSUIWebClientContext* _context;
	NSArray* _buttonModels;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL pauseTimeouts;                           //@synthesize pauseTimeouts=_pauseTimeouts - In the implementation block
@property (nonatomic,retain) NSArray * buttonModels;                       //@synthesize buttonModels=_buttonModels - In the implementation block
@property (nonatomic,retain) AMSDialogRequest * request;                   //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(AMSDialogRequest *)arg1 ;
-(AMSUIWebClientContext *)context;
-(AMSDialogRequest *)request;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)pauseTimeouts;
-(void)setPauseTimeouts:(BOOL)arg1 ;
-(NSArray *)buttonModels;
-(void)setButtonModels:(NSArray *)arg1 ;
@end

