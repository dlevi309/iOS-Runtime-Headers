/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class PSSpecifier, NSString;

@interface STCloudSyncDataGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {

	PSSpecifier* _toggleCloudSyncDataSpecifier;

}

@property (nonatomic,readonly) PSSpecifier * toggleCloudSyncDataSpecifier;              //@synthesize toggleCloudSyncDataSpecifier=_toggleCloudSyncDataSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)dealloc;
-(void)setCloudSyncData:(id)arg1 specifier:(id)arg2 ;
-(id)cloudSyncData:(id)arg1 ;
-(void)_updateEnabledValue;
-(void)changeCloudSyncData:(BOOL)arg1 ;
-(PSSpecifier *)toggleCloudSyncDataSpecifier;
-(void)setScreenTimeSyncing:(BOOL)arg1 ;
-(void)performHSA2RepairIfNeeded:(/*^block*/id)arg1 ;
-(void)presentHSA2RepairUI:(/*^block*/id)arg1 ;
@end

