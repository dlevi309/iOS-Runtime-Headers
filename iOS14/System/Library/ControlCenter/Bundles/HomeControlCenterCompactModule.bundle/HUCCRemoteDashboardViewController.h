/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HUHomeControlInterface.h>

@protocol HUCCRemoteDashboardDelegate;
@interface HUCCRemoteDashboardViewController : _UIRemoteViewController <HUHomeControlInterface> {

	id<HUCCRemoteDashboardDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCCRemoteDashboardDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<HUCCRemoteDashboardDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<HUCCRemoteDashboardDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)quickControlsPresentationDidUpdate:(BOOL)arg1 ;
-(void)authorizeIfLocked;
@end

