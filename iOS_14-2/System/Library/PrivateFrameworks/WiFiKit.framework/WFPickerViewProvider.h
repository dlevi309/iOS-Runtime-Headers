/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFNetworkView.h>
#import <libobjc.A.dylib/WFNetworkViewProvider.h>

@protocol WFPickerViewProviderDelegate;
@class UIViewController, NSString;

@interface WFPickerViewProvider : NSObject <WFNetworkView, WFNetworkViewProvider> {

	BOOL wantsModalPresentation;
	id<WFPickerViewProviderDelegate> _delegate;
	UIViewController* _rootViewController;

}

@property (nonatomic,retain) UIViewController * rootViewController;                         //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFPickerViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFPickerViewProviderDelegate>)delegate;
-(BOOL)wantsModalPresentation;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<WFPickerViewProviderDelegate>)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(UIViewController *)rootViewController;
-(void)presentNetworkViewController:(id)arg1 forContext:(id)arg2 ;
-(id)credentialsViewControllerWithContext:(id)arg1 ;
-(id)certificateViewControllerWithContext:(id)arg1 ;
-(id)networkErrorViewControllerWithContext:(id)arg1 ;
-(id)otherNetworkViewControllerWithContext:(id)arg1 ;
-(id)networkDetailsViewControllerWithContext:(id)arg1 ;
-(void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2 ;
-(BOOL)_canHandleCredentialsContext:(id)arg1 ;
-(id)_promptForEnterpriseJoin:(id)arg1 ;
@end

