/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@protocol OS_os_log;
@class NSObject;

@interface NADelegateMethodLogSettings : NSObject {

	unsigned char _logType;
	NSObject*<OS_os_log> _log;
	/*^block*/id _argumentFormatter;
	/*^block*/id _logger;

}

@property (nonatomic,copy,readonly) id argumentFormatter;              //@synthesize argumentFormatter=_argumentFormatter - In the implementation block
@property (nonatomic,copy) id logger;                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;               //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) unsigned char logType;                  //@synthesize logType=_logType - In the implementation block
-(unsigned char)logType;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(id)initWithLog:(id)arg1 logType:(unsigned char)arg2 argumentFormatter:(/*^block*/id)arg3 ;
-(void)setLogger:(id)arg1 ;
-(id)logger;
-(id)formattedDescriptionForArgument:(id)arg1 ;
-(id)argumentFormatter;
@end

