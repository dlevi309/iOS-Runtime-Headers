/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class AMSUIWebViewController, ACAccount, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer> {

	AMSUIWebViewController* _webViewController;

}

@property (nonatomic,readonly) AMSUIWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (nonatomic,retain) NSDictionary * metricsOverlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(void)viewWillLayoutSubviews;
-(void)_setup;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSUIWebViewController *)webViewController;
-(id<AMSBagProtocol>)bag;
-(void)viewDidLoad;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)_setupChildViewController;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)_setChildViewController:(id)arg1 ;
-(void)_startLoading;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3 ;
-(void)_setupLayout;
@end

