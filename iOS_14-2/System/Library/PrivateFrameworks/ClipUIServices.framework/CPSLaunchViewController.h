/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PRXFlowDelegate.h>
#import <libobjc.A.dylib/CPSLaunchContentViewControllerDelegate.h>

@protocol CPSLaunchViewControllerDelegate;
@class CPSLaunchContentViewController, CPSClipMetadata, NSURL, NSNumber, NSString;

@interface CPSLaunchViewController : UIViewController <PRXFlowDelegate, CPSLaunchContentViewControllerDelegate> {

	CPSLaunchContentViewController* _launchContentViewController;
	CPSClipMetadata* _metadata;
	NSURL* _url;
	id<CPSLaunchViewControllerDelegate> _delegate;
	CPSLaunchContentViewController* _launchViewController;
	NSNumber* _uiMock_openButtonEnabled;

}

@property (nonatomic,readonly) CPSLaunchContentViewController * launchViewController;                              //@synthesize launchViewController=_launchViewController - In the implementation block
@property (setter=uiMock_setOpenButtonEnabled:,nonatomic,retain) NSNumber * uiMock_openButtonEnabled;              //@synthesize uiMock_openButtonEnabled=_uiMock_openButtonEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<CPSLaunchViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id<CPSLaunchViewControllerDelegate>)delegate;
-(id)initWithMetadata:(id)arg1 ;
-(void)_dismiss;
-(void)setDelegate:(id<CPSLaunchViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)uiMock_setOpenButtonEnabled:(id)arg1 ;
-(void)launchContentViewControllerDidDisappear:(id)arg1 didOpenClip:(BOOL)arg2 ;
-(void)proxCardFlowDidDismiss;
-(id)initWithClipURL:(id)arg1 metadata:(id)arg2 ;
-(CPSLaunchContentViewController *)launchViewController;
-(NSNumber *)uiMock_openButtonEnabled;
@end

