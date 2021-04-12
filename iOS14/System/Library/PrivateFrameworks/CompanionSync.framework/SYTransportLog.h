/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)logMessage:(id)arg1 ;
-(id)init;
-(void)setFacility:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)oslog;
-(NSString *)facility;
-(void)_createLog;
-(void)logMessage:(id)arg1 args:(char*)arg2 ;
-(void)_logOSMessage:(const char*)arg1 args:(char*)arg2 returnAddress:(void*)arg3 ;
@end

