/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/EKICSPreviewControllerDelegate.h>

@class NSString, NSURL, UIBarButtonItem, EKICSPreviewController;

@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate> {

	NSString* _filePath;
	NSURL* _sourceURL;
	UIBarButtonItem* _activityBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	EKICSPreviewController* _icsController;
	/*^block*/id _beforeDismissHandler;

}

@property (nonatomic,copy) id beforeDismissHandler;                 //@synthesize beforeDismissHandler=_beforeDismissHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)icsPreviewControllerWantsDismissal:(id)arg1 ;
-(void)_presentActivityViewController:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)_updateNavigationBarItems;
-(void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1 ;
-(void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 ;
-(id)beforeDismissHandler;
-(void)setBeforeDismissHandler:(id)arg1 ;
@end

