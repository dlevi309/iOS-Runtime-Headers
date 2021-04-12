/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@interface WKImagePreviewViewController : UIViewController {

	RetainPtr<NSArray>* _imageActions;
	RetainPtr<_WKActivatedElementInfo>* _activatedElementInfo;
	RetainPtr<CGImage *>* _image;
	RetainPtr<UIImageView>* _imageView;

}
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)previewActionItems;
-(id)initWithCGImage:(RetainPtr<CGImage *>*)arg1 defaultActions:(RetainPtr<NSArray>*)arg2 elementInfo:(RetainPtr<_WKActivatedElementInfo>*)arg3 ;
@end

