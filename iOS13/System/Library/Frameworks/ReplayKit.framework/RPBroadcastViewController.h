/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/UIViewController.h>

@protocol RPBroadcastViewControllerDelegate;
@class RPBroadcastHostViewController;

@interface RPBroadcastViewController : UIViewController {

	id<RPBroadcastViewControllerDelegate> _delegate;
	RPBroadcastHostViewController* _hostViewController;
	/*^block*/id _setupCompletionHandler;

}

@property (nonatomic,retain) RPBroadcastHostViewController * hostViewController;                 //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id setupCompletionHandler;                                            //@synthesize setupCompletionHandler=_setupCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<RPBroadcastViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getBroadcastExtensionWithBaseIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(void)loadBroadcastViewControllerWithBaseIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<RPBroadcastViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)setHostViewController:(RPBroadcastHostViewController *)arg1 ;
-(RPBroadcastHostViewController *)hostViewController;
-(id)setupCompletionHandler;
-(void)setSetupCompletionHandler:(id)arg1 ;
@end

