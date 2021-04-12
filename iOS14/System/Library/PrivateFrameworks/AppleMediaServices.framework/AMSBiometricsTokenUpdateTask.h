/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSSecurityClientInterface.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSRequestPresentationDelegate, AMSBagProtocol;
@class ACAccount, NSDictionary, AMSProcessInfo, AMSURLSession, NSString;

@interface AMSBiometricsTokenUpdateTask : AMSTask <AMSSecurityClientInterface, AMSBagConsumer> {

	BOOL _shouldGenerateKeysOnly;
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
@property (assign,nonatomic) BOOL shouldGenerateKeysOnly;                                                 //@synthesize shouldGenerateKeysOnly=_shouldGenerateKeysOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestConfirmation;                                              //@synthesize shouldRequestConfirmation=_shouldRequestConfirmation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
-(ACAccount *)account;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)performUpdate;
-(AMSURLSession *)session;
-(id<AMSRequestPresentationDelegate>)presentationDelegate;
-(id<AMSBagProtocol>)bag;
-(void)setSession:(AMSURLSession *)arg1 ;
-(void)setPresentationDelegate:(id<AMSRequestPresentationDelegate>)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldRequestConfirmation:(BOOL)arg1 ;
-(void)setAdditionalDialogMetrics:(NSDictionary *)arg1 ;
-(id)_sendRequestToDaemon;
-(BOOL)shouldPromptUser;
-(NSDictionary *)additionalDialogMetrics;
-(BOOL)shouldGenerateKeysOnly;
-(BOOL)shouldRequestConfirmation;
-(void)setShouldGenerateKeysOnly:(BOOL)arg1 ;
-(void)setShouldPromptUser:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

