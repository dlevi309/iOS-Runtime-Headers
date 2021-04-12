/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class AMSUIDynamicViewController, ACAccount, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer> {

	AMSUIDynamicViewController* _dynamicViewController;

}

@property (nonatomic,readonly) AMSUIDynamicViewController * dynamicViewController;              //@synthesize dynamicViewController=_dynamicViewController - In the implementation block
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (nonatomic,retain) NSDictionary * metricsOverlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)_setup;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)_setupChildViewController:(id)arg1 ;
-(AMSUIDynamicViewController *)dynamicViewController;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
@end

