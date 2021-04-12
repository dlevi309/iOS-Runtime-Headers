/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/RPVideoEditorViewControllerDelegate.h>
#import <ReplayKit/ReplayKitMacHelperDelegate.h>

@protocol RPPreviewViewControllerDelegate;
@class NSURL, RPVideoEditorHostViewController, NSString;

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate, ReplayKitMacHelperDelegate> {

	BOOL _wasStatusBarHidden;
	id<RPPreviewViewControllerDelegate> _previewControllerDelegate;
	long long _mode;
	NSURL* _movieURL;
	RPVideoEditorHostViewController* _hostViewController;

}

@property (assign,nonatomic) BOOL wasStatusBarHidden;                                                           //@synthesize wasStatusBarHidden=_wasStatusBarHidden - In the implementation block
@property (nonatomic,retain) NSURL * movieURL;                                                                  //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) RPVideoEditorHostViewController * hostViewController;                              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,nonatomic,__weak) id<RPPreviewViewControllerDelegate> previewControllerDelegate;              //@synthesize previewControllerDelegate=_previewControllerDelegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                                    //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadPreviewViewControllerWithMovieURL:(id)arg1 attachmentURL:(id)arg2 overrideShareMessage:(id)arg3 overrideTintColor:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSURL *)movieURL;
-(void)setHostViewController:(RPVideoEditorHostViewController *)arg1 ;
-(RPVideoEditorHostViewController *)hostViewController;
-(void)setMovieURL:(NSURL *)arg1 ;
-(void)setPreviewControllerDelegate:(id<RPPreviewViewControllerDelegate>)arg1 ;
-(void)extensionDidFinishWithActivityTypes:(id)arg1 ;
-(void)setWasStatusBarHidden:(BOOL)arg1 ;
-(BOOL)wasStatusBarHidden;
-(id<RPPreviewViewControllerDelegate>)previewControllerDelegate;
-(void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2 ;
-(void)replayKitMacHelper:(id)arg1 didDismissVideoEditorSheetWithActivityTypes:(id)arg2 ;
@end

