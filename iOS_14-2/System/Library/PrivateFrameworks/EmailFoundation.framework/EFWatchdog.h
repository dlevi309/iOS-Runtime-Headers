/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(NSString *)monitoredBundleIdentifier;
-(id)initWithMonitoredBundleIdentifier:(id)arg1 ;
-(void)invalidate;
-(void)quitMonitor:(id)arg1 userClosedLastSceneOfApplicationWithBundleID:(id)arg2 ;
@end

