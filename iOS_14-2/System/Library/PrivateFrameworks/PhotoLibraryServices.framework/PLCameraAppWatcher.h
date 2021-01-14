/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(id)init;
-(BOOL)isCameraRunning;
-(PLForegroundMonitor *)foregroundMonitor;
@end

