/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_toggleState;
-(void)buttonTapped:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(id)_debugDescriptionForState:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_isCellularDataButtonDemoMode;
-(void)_updateState;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(BOOL)_canShowWhileLocked;
-(id)displayName;
-(BOOL)_isCellularDataRestricted;
@end

