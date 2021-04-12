/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/QLRemotePopoverTracker.h>

@protocol QLCustomItemViewControllerHost;
@class QLAppearance, NSDictionary, UIView, NSString;

@interface QLCustomItemViewController : UIViewController <QLRemotePopoverTracker> {

	QLAppearance* _lastAppearance;
	BOOL _isShareEnabled;
	NSDictionary* _previewOptions;
	UIView* _shareSheetPresentationView;
	id<QLCustomItemViewControllerHost> _hostViewControllerProxy;

}

@property (assign,nonatomic,__weak) UIView * shareSheetPresentationView;                    //@synthesize shareSheetPresentationView=_shareSheetPresentationView - In the implementation block
@property (retain) id<QLCustomItemViewControllerHost> hostViewControllerProxy;              //@synthesize hostViewControllerProxy=_hostViewControllerProxy - In the implementation block
@property (nonatomic,copy) NSDictionary * previewOptions;                                   //@synthesize previewOptions=_previewOptions - In the implementation block
@property (assign,nonatomic) BOOL isShareEnabled;                                           //@synthesize isShareEnabled=_isShareEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFullScreen:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)getFrameWithCompletionBlock:(/*^block*/id)arg1 ;
-(id<QLCustomItemViewControllerHost>)hostViewControllerProxy;
-(void)presentActivityViewControllerFromView:(id)arg1 withURL:(id)arg2 ;
-(void)didDismissActivityViewController;
-(void)presentationModeDidChange:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)dismissPreviewController;
-(void)presentActivityViewControllerFromView:(id)arg1 ;
-(void)forwardMessageToHost:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)previewOptions;
-(void)setPreviewOptions:(NSDictionary *)arg1 ;
-(BOOL)isShareEnabled;
-(void)setIsShareEnabled:(BOOL)arg1 ;
-(UIView *)shareSheetPresentationView;
-(void)setShareSheetPresentationView:(UIView *)arg1 ;
-(void)setHostViewControllerProxy:(id<QLCustomItemViewControllerHost>)arg1 ;
@end

