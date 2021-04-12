/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSRequestPresentationDelegate.h>

@protocol AMSBagProtocol;
@class ACAccount, NSArray, UIViewController, AMSAutomaticDownloadKindsSetTask, NSString;

@interface AMSUIAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSArray* _enabledMediaKinds;
	UIViewController* _viewController;
	AMSAutomaticDownloadKindsSetTask* _task;

}

@property (nonatomic,retain) AMSAutomaticDownloadKindsSetTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSArray * enabledMediaKinds;                        //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(void)setViewController:(UIViewController *)arg1 ;
-(AMSAutomaticDownloadKindsSetTask *)task;
-(void)setTask:(AMSAutomaticDownloadKindsSetTask *)arg1 ;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(UIViewController *)viewController;
-(NSArray *)enabledMediaKinds;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 viewController:(id)arg4 ;
@end

