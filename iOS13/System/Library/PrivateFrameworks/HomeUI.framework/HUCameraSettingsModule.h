/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class UIViewController;


@protocol HUCameraSettingsModule <NSObject>
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
@optional
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(id)arg1;
-(unsigned long long)displayStyle;
-(id)didSelectItem:(id)arg1;

@required
-(BOOL)isItemHeader:(id)arg1;

@end

