/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSAuthenticateTaskDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class AMSPurchaseInfo, AMSURLSession, NSString;

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	AMSPurchaseInfo* _purchaseInfo;
	AMSURLSession* _session;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                               //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSPurchaseInfo * purchaseInfo;                       //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
@property (nonatomic,readonly) AMSURLSession * session;                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<AMSPurchaseDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id<AMSPurchaseDelegate>)delegate;
-(AMSPurchaseInfo *)purchaseInfo;
-(AMSURLSession *)session;
-(id<AMSBagProtocol>)bag;
-(void)setDelegate:(id<AMSPurchaseDelegate>)arg1 ;
-(id)performPurchase;
-(id)initWithPurchase:(id)arg1 bag:(id)arg2 ;
-(id)_promptForAccount;
-(void)_generateFraudScoreWithInfo:(id)arg1 ;
-(BOOL)_shouldPreauthenticatePurchase:(id)arg1 ;
-(id)_performPreauthenticate;
-(id)_performPurchaseWithError:(id*)arg1 ;
-(id)_runAuthenticateRequest:(id)arg1 ;
-(id)_recordEngagementEventWithInfo:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_runDialogRequest:(id)arg1 ;
-(void)setPurchaseInfo:(AMSPurchaseInfo *)arg1 ;
@end

