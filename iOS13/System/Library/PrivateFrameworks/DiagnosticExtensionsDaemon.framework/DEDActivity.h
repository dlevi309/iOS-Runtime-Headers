/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@protocol OS_os_activity;
@class NSObject;

@interface DEDActivity : NSObject {

	NSObject*<OS_os_activity> _cleanup;

}

@property (retain) NSObject*<OS_os_activity> cleanup;              //@synthesize cleanup=_cleanup - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_os_activity>)cleanup;
-(id)currentCleanupActivity;
-(void)setCleanup:(NSObject*<OS_os_activity>)arg1 ;
-(id)newCleanupActivity;
@end

