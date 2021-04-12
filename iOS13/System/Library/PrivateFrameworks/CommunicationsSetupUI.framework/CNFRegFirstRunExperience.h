/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

@class UIBarButtonItem;


@protocol CNFRegFirstRunExperience <NSObject>
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate; 
@property (nonatomic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,retain) UIBarButtonItem * customRightButton; 
@required
-(id<CNFRegFirstRunDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2;
-(void)setCustomLeftButton:(id)arg1;
-(void)setCustomRightButton:(id)arg1;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;

@end

