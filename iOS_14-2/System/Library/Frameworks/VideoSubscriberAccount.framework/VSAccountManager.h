/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSViewServiceRequestOperationDelegate.h>

@protocol VSAccountManagerDelegate;
@class VSSecurityTask, VSPrivacyInfoCenter, VSViewServiceRequestCenter, VSLinkedOnOrAfterChecker, NSString;

@interface VSAccountManager : NSObject <VSViewServiceRequestOperationDelegate> {

	id<VSAccountManagerDelegate> _delegate;
	VSSecurityTask* _securityTask;
	VSPrivacyInfoCenter* _privacyInfoCenter;
	VSViewServiceRequestCenter* _requestCenter;
	VSLinkedOnOrAfterChecker* _linkedOnOrAfterChecker;

}

@property (nonatomic,retain) VSSecurityTask * securityTask;                                  //@synthesize securityTask=_securityTask - In the implementation block
@property (nonatomic,retain) VSPrivacyInfoCenter * privacyInfoCenter;                        //@synthesize privacyInfoCenter=_privacyInfoCenter - In the implementation block
@property (nonatomic,retain) VSViewServiceRequestCenter * requestCenter;                     //@synthesize requestCenter=_requestCenter - In the implementation block
@property (nonatomic,retain) VSLinkedOnOrAfterChecker * linkedOnOrAfterChecker;              //@synthesize linkedOnOrAfterChecker=_linkedOnOrAfterChecker - In the implementation block
@property (assign,nonatomic,__weak) id<VSAccountManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<VSAccountManagerDelegate>)delegate;
-(void)setDelegate:(id<VSAccountManagerDelegate>)arg1 ;
-(void)setLinkedOnOrAfterChecker:(VSLinkedOnOrAfterChecker *)arg1 ;
-(VSLinkedOnOrAfterChecker *)linkedOnOrAfterChecker;
-(VSSecurityTask *)securityTask;
-(VSPrivacyInfoCenter *)privacyInfoCenter;
-(id)_enqueueViewServiceRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(VSViewServiceRequestCenter *)requestCenter;
-(void)viewServiceRequestOperation:(id)arg1 presentViewController:(id)arg2 ;
-(void)viewServiceRequestOperation:(id)arg1 dismissViewController:(id)arg2 ;
-(BOOL)viewServiceRequestOperation:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2 ;
-(void)checkAccessStatusWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enqueueAccountMetadataRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSecurityTask:(VSSecurityTask *)arg1 ;
-(void)setPrivacyInfoCenter:(VSPrivacyInfoCenter *)arg1 ;
-(void)setRequestCenter:(VSViewServiceRequestCenter *)arg1 ;
@end

