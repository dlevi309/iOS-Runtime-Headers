/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class UIViewController;


@protocol HUCameraSettingsModule <NSObject>
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
@optional
-(id)didSelectItem:(id)arg1;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(id)arg1;
-(unsigned long long)displayStyle;

@required
-(BOOL)isItemHeader:(id)arg1;

@end

