/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDNotifier.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class DEDNotifierConfiguration, NSString, UNUserNotificationCenter, NSObject;

@interface DEDUserNotificationNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding> {

	DEDNotifierConfiguration* _config;
	NSString* _bugSessionIdentifier;
	UNUserNotificationCenter* _center;
	NSObject*<OS_os_log> _log;

}

@property (__weak) DEDNotifierConfiguration * config;               //@synthesize config=_config - In the implementation block
@property (retain) NSString * bugSessionIdentifier;                 //@synthesize bugSessionIdentifier=_bugSessionIdentifier - In the implementation block
@property (retain) UNUserNotificationCenter * center;               //@synthesize center=_center - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(DEDNotifierConfiguration *)config;
-(void)setConfig:(DEDNotifierConfiguration *)arg1 ;
-(UNUserNotificationCenter *)center;
-(void)setCenter:(UNUserNotificationCenter *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)scheduleNotification;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(NSString *)bugSessionIdentifier;
-(void)cancelNotification;
-(void)setBugSessionIdentifier:(NSString *)arg1 ;
-(id)createNotificationCenter;
@end

