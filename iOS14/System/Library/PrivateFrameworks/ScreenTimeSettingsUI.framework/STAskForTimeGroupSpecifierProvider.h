/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(id)requestSpecifiers;
-(void)confirmRespondToRequest:(id)arg1 ;
-(id)_createSpecifierForAskForMore:(id)arg1 ;
-(void)respondToRequest:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3 ;
@end

