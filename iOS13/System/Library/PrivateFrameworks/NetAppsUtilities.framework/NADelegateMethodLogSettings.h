/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)logger;
-(NSObject*<OS_os_log>)log;
-(void)setLogger:(id)arg1 ;
-(unsigned char)logType;
-(id)formattedDescriptionForArgument:(id)arg1 ;
-(id)initWithLog:(id)arg1 logType:(unsigned char)arg2 argumentFormatter:(/*^block*/id)arg3 ;
-(id)argumentFormatter;
@end

