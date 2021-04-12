/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

@class NSString, QLItemPresenterViewController;


@protocol QLItemViewControllerPresentingDelegate
@property (nonatomic,readonly) NSString * parentApplicationDisplayIdentifier; 
@property (nonatomic,readonly) NSString * hostApplicationBundleIdentifier; 
@property (readonly) QLItemPresenterViewController * itemPresenterViewController; 
@required
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
-(QLItemPresenterViewController *)itemPresenterViewController;
-(NSString *)hostApplicationBundleIdentifier;
-(NSString *)parentApplicationDisplayIdentifier;

@end

