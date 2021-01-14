/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UINavigationController.h>

@protocol UIPrintPanelAppearanceDelegate;
@interface UIPrintPanelNavigationController : UINavigationController {

	id<UIPrintPanelAppearanceDelegate> _appearanceDelegate;

}

@property (assign,nonatomic,__weak) id<UIPrintPanelAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
-(void)__viewWillLayoutSubviews;
-(void)setAppearanceDelegate:(id<UIPrintPanelAppearanceDelegate>)arg1 ;
-(id<UIPrintPanelAppearanceDelegate>)appearanceDelegate;
-(void)_presentationControllerDidDismiss:(id)arg1 ;
@end

