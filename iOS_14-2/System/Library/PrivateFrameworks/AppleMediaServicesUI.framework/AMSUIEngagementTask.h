/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSUIWebDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class AMSEngagementRequest, UIViewController, NSString;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSBagConsumer> {

	BOOL _presented;
	id<AMSBagProtocol> _bag;
	AMSEngagementRequest* _request;
	/*^block*/id _resolveBlock;
	UIViewController* _viewController;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                         //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic) BOOL presented;                                 //@synthesize presented=_presented - In the implementation block
@property (nonatomic,retain) AMSEngagementRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id resolveBlock;                                  //@synthesize resolveBlock=_resolveBlock - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithRequest:(id)arg1 bag:(id)arg2 presentingViewController:(id)arg3 ;
-(void)setRequest:(AMSEngagementRequest *)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(AMSEngagementRequest *)request;
-(BOOL)presented;
-(UIViewController *)viewController;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)presentEngagement;
-(BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_viewControllerForType:(id)arg1 ;
-(void)setResolveBlock:(id)arg1 ;
-(void)setPresented:(BOOL)arg1 ;
-(id)resolveBlock;
@end

