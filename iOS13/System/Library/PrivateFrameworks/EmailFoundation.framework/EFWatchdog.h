/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/SBSApplicationUserQuitMonitorDelegate.h>

@class SBSApplicationUserQuitMonitor, NSString;

@interface EFWatchdog : NSObject <EFLoggable, SBSApplicationUserQuitMonitorDelegate> {

	SBSApplicationUserQuitMonitor* _monitor;
	NSString* _monitoredBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * monitoredBundleIdentifier;              //@synthesize monitoredBundleIdentifier=_monitoredBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)invalidate;
-(void)start;
-(void)quitMonitor:(id)arg1 userClosedLastSceneOfApplicationWithBundleID:(id)arg2 ;
-(NSString *)monitoredBundleIdentifier;
-(id)initWithMonitoredBundleIdentifier:(id)arg1 ;
@end

