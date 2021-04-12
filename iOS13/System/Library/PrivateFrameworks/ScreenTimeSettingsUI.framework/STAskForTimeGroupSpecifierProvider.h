/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(id)requestSpecifiers;
-(void)confirmRespondToRequest:(id)arg1 ;
-(id)_createSpecifierForAskForMore:(id)arg1 ;
-(void)respondToRequest:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3 ;
@end

