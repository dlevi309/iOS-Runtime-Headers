/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, AMSRequestPresentationDelegate;
@class ACAccount, NSArray, AMSURLSession, NSString;

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSArray* _enabledMediaKinds;
	id<AMSRequestPresentationDelegate> _presentationDelegate;
	AMSURLSession* _session;

}

@property (nonatomic,retain) AMSURLSession * session;                                                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                                      //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSArray * enabledMediaKinds;                                                 //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
@property (nonatomic,__weak,readonly) id<AMSRequestPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(AMSURLSession *)session;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<AMSRequestPresentationDelegate>)presentationDelegate;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(void)setSession:(AMSURLSession *)arg1 ;
-(NSArray *)enabledMediaKinds;
-(id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
-(id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 presentationDelegate:(id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

