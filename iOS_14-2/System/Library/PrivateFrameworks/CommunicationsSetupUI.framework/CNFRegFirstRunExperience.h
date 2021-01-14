/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

