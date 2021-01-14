/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI.DocumentViewController.h>
#import <libobjc.A.dylib/IAMMessageTarget.h>

@class NSString;

@interface VideosUI.DocumentRequestViewController : VideosUI.DocumentViewController <IAMMessageTarget> {

	 viewWillAppearAfterTabSwitch;
	 staticPPTDocumentFolderPath;
	 documentType;
	 initialControllerRef;
	 initialRequestSent;
	 inAppBannerAllowed;
	 inAppBannerNotificationPending;
	 activeServiceRequest;
	 activeFragmentServiceRequest;
	 eventMonitorController;
	 shouldHideLoadingView;

}

@property (readonly,nonatomic) NSString * targetIdentifier; 
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3 ;
-(NSString *)targetIdentifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

