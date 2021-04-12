/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface SYTransportLog : NSObject {

	NSObject*<OS_os_log> _log;
	NSString* _facility;
	NSObject*<OS_os_log> _oslog;

}

@property (nonatomic,copy) NSString * facility;                         //@synthesize facility=_facility - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> oslog;              //@synthesize oslog=_oslog - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)logMessage:(id)arg1 ;
-(NSString *)facility;
-(void)setFacility:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)oslog;
-(void)_createLog;
-(void)logMessage:(id)arg1 args:(char*)arg2 ;
-(void)_logOSMessage:(const char*)arg1 args:(char*)arg2 returnAddress:(void*)arg3 ;
@end

