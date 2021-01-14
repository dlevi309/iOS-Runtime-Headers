/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBBiometricMonitorObserver.h>

@protocol SBBiometricMonitorDataSource;
@class UIWindow, SBBiometricMonitorViewController, NSString;

@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver> {

	BOOL _enabled;
	UIWindow* _debugWindow;
	SBBiometricMonitorViewController* _debugViewController;
	BOOL _deferredMatchUpdatePending;
	BOOL _deferredPresenceDetectUpdatePending;
	id<SBBiometricMonitorDataSource> _dataSource;

}

@property (nonatomic,retain) id<SBBiometricMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disable;
-(void)enable;
-(id)init;
-(id<SBBiometricMonitorDataSource>)dataSource;
-(void)setDataSource:(id<SBBiometricMonitorDataSource>)arg1 ;
-(void)_updateMatchState;
-(void)_updatePresenceDetectState;
-(void)_cancelDeferredUpdateMatchState;
-(void)_doDeferredMatchStateUpdate;
-(void)_doDeferredPresenceDetectUpdate;
-(void)_deferredUpdateMatchState;
-(BOOL)_isDeferredMatchStateUpdatePending;
-(BOOL)_isDeferredPresenceDetectStateUpdatePending;
-(void)_cancelDeferredUpdatePresenceDetectState;
-(void)_deferredUpdatePresenceDetectState;
-(void)biometricMonitorDataSourceMatchingStarted:(id)arg1 ;
-(void)biometricMonitorDataSourceMatchingFailed:(id)arg1 ;
-(void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1 ;
-(void)biometricMonitorDataSourceMatchingEnded:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1 ;
-(void)biometricMonitorDataSourcePoseUpdated:(id)arg1 ;
@end

