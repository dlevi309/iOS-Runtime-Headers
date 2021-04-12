/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppNavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UITapGestureRecognizer, VUIDocumentUIConfiguration, NSString;

@interface VUINavigationController : VUIAppNavigationController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {

	UITapGestureRecognizer* _gesture;
	VUIDocumentUIConfiguration* _configuration;

}

@property (nonatomic,retain) UITapGestureRecognizer * gesture;                        //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,retain) VUIDocumentUIConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfiguration:(VUIDocumentUIConfiguration *)arg1 ;
-(VUIDocumentUIConfiguration *)configuration;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)gesture;
@end

