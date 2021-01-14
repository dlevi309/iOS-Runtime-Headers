/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/


@protocol OS_os_log;
@class NSObject;

@interface Logger : NSObject {

	NSObject*<OS_os_log> _logger;

}
+(id)loggerWithCategory:(id)arg1 ;
+(id)loggerWithCategory:(id)arg1 instance:(id)arg2 ;
-(id)getLogger;
-(id)initWithCategory:(id)arg1 instance:(id)arg2 ;
@end

