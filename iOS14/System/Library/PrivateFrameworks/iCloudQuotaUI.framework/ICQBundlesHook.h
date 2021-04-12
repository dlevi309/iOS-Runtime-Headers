/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <libobjc.A.dylib/AMSUIDynamicViewControllerDelegate.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol ICQServerHookDelegate, AAUIServerHookDelegate;
@class ICQUpgradeFlowManager, NSDictionary, NSString, UIViewController, AAUIServerHookResponse, RUIObjectModel;

@interface ICQBundlesHook : NSObject <AMSUIDynamicViewControllerDelegate, AAUIServerHook> {

	ICQUpgradeFlowManager*<ICQServerHookDelegate> _flowManager;
	NSDictionary* _clientInfo;
	long long _statusCode;
	/*^block*/id _completionHandler;
	long long _amsErrorCode;
	long long _amsAction;
	NSString* _buyParamsStr;
	UIViewController* _presentingViewController;
	id<AAUIServerHookDelegate> _delegate;
	NSString* _buffervar;

}

@property (nonatomic,retain) NSString * buffervar;                                     //@synthesize buffervar=_buffervar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (nonatomic,retain) RUIObjectModel * objectModel; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(void)setAdditionalParameters:(id)arg1 ;
-(void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3 ;
-(id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AAUIServerHookResponse *)serverHookResponse;
-(id)initWithFlowManager:(id)arg1 ;
-(void)launchBundleOffer;
-(NSString *)buffervar;
-(void)setBuffervar:(NSString *)arg1 ;
@end

