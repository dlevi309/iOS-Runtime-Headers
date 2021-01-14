/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface STFamilyMemberGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)dealloc;
-(id)familySpecifiers;
-(void)imageDidUpdate:(id)arg1 ;
-(id)totalChildUsageTime:(id)arg1 ;
-(void)showChildViewController:(id)arg1 ;
-(id)createSpecifierForUser:(id)arg1 shouldWarn:(BOOL)arg2 ;
@end

