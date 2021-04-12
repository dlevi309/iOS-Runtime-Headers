/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>

@class PLForegroundMonitor, NSString;

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate> {

	BOOL _isCameraRunning;
	PLForegroundMonitor* _foregroundMonitor;

}

@property (nonatomic,readonly) PLForegroundMonitor * foregroundMonitor;              //@synthesize foregroundMonitor=_foregroundMonitor - In the implementation block
@property (nonatomic,readonly) BOOL isCameraRunning;                                 //@synthesize isCameraRunning=_isCameraRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(BOOL)isCameraRunning;
-(PLForegroundMonitor *)foregroundMonitor;
@end

