/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

@class NSString, QLItemPresenterViewController;


@protocol QLItemViewControllerPresentingDelegate
@property (nonatomic,readonly) NSString * hostApplicationBundleIdentifier; 
@property (readonly) QLItemPresenterViewController * itemPresenterViewController; 
@required
-(NSString *)hostApplicationBundleIdentifier;
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
-(QLItemPresenterViewController *)itemPresenterViewController;

@end

