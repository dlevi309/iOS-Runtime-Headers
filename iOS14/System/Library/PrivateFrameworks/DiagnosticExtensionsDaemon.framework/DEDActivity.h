/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCleanup:(NSObject*<OS_os_activity>)arg1 ;
-(id)newCleanupActivity;
-(id)currentCleanupActivity;
@end

