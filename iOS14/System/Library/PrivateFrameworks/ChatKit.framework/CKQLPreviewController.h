/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <QuickLook/QLPreviewController.h>

@interface CKQLPreviewController : QLPreviewController {

	BOOL _controllerWasDismissed;
	BOOL _suppressRefetchingCurrentHighQualityImage;

}

@property (assign,nonatomic) BOOL controllerWasDismissed;                                 //@synthesize controllerWasDismissed=_controllerWasDismissed - In the implementation block
@property (assign,nonatomic) BOOL suppressRefetchingCurrentHighQualityImage;              //@synthesize suppressRefetchingCurrentHighQualityImage=_suppressRefetchingCurrentHighQualityImage - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)controllerWasDismissed;
-(void)setControllerWasDismissed:(BOOL)arg1 ;
-(BOOL)suppressRefetchingCurrentHighQualityImage;
-(void)setSuppressRefetchingCurrentHighQualityImage:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)currentPreviewItem;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(id)previewActions;
@end

