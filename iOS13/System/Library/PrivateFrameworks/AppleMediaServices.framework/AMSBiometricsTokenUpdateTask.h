/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSSecurityClientInterface.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSRequestPresentationDelegate, AMSBagProtocol;
@class ACAccount, NSDictionary, AMSProcessInfo, AMSURLSession, NSString;

@interface AMSBiometricsTokenUpdateTask : AMSTask <AMSSecurityClientInterface, AMSBagConsumer> {

	BOOL _shouldRequestConfirmation;
	BOOL _shouldPromptUser;
	ACAccount* _account;
	NSDictionary* _additionalDialogMetrics;
	AMSProcessInfo* _clientInfo;
	id<AMSRequestPresentationDelegate> _presentationDelegate;
	id<AMSBagProtocol> _bag;
	AMSURLSession* _session;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptUser;                                                       //@synthesize shouldPromptUser=_shouldPromptUser - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalDialogMetrics;                                      //@synthesize additionalDialogMetrics=_additionalDialogMetrics - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                                 //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic,__weak) id<AMSRequestPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestConfirmation;                                              //@synthesize shouldRequestConfirmation=_shouldRequestConfirmation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(void)setPresentationDelegate:(id<AMSRequestPresentationDelegate>)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSRequestPresentationDelegate>)presentationDelegate;
-(id<AMSBagProtocol>)bag;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(id)performUpdate;
-(void)setShouldRequestConfirmation:(BOOL)arg1 ;
-(void)setAdditionalDialogMetrics:(NSDictionary *)arg1 ;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_sendRequestToDaemon;
-(NSDictionary *)additionalDialogMetrics;
-(BOOL)shouldRequestConfirmation;
-(BOOL)shouldPromptUser;
-(void)setShouldPromptUser:(BOOL)arg1 ;
@end

