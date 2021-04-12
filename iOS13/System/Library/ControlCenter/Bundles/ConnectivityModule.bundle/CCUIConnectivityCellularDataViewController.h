/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface CCUIConnectivityCellularDataViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(id)init;
-(id)displayName;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateState;
-(void)buttonTapped:(id)arg1 ;
-(BOOL)_toggleState;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(id)_debugDescriptionForState:(BOOL)arg1 ;
-(BOOL)_isCellularDataButtonDemoMode;
-(BOOL)_isCellularDataRestricted;
@end

