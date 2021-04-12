/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {

	NSObject*<LSApplicationWorkspaceObserverProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<ATWorkspaceObserverDelegate> delegate; 
-(void)startObserving;
-(void)stopObserving;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(NSObject*<ATWorkspaceObserverDelegate>)delegate;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)setDelegate:(NSObject*<ATWorkspaceObserverDelegate>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
@end

