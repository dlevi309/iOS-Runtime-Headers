/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class ACAccount, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUIDynamicViewController : UIViewController <AMSBagConsumer> {

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
-(id)title;
-(void)setTitle:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)_setup;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)_setupChildViewController:(id)arg1 ;
-(id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2 ;
-(id)initWithBag:(id)arg1 javaScriptURL:(id)arg2 ;
-(AMSUIDynamicViewController *)dynamicViewController;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
@end

