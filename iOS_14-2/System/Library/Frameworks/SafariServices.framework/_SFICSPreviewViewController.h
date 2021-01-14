/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_done:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_presentActivityViewController:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(void)_updateNavigationBarItems;
-(void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1 ;
-(void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1 ;
-(void)icsPreviewControllerWantsDismissal:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 ;
-(id)beforeDismissHandler;
-(void)setBeforeDismissHandler:(id)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
@end

