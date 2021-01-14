/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_source;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CUDashboardServer : NSObject {

	unsigned char _key[32];
	_sFILE* _logFile;
	int _sockV4;
	NSObject*<OS_dispatch_source> _sockV4Source;
	int _sockV6;
	NSObject*<OS_dispatch_source> _sockV6Source;
	NSString* _logFilePath;

}

@property (nonatomic,copy) NSString * logFilePath;              //@synthesize logFilePath=_logFilePath - In the implementation block
-(id)init;
-(void)_readHandler:(int)arg1 ;
-(void)setLogFilePath:(NSString *)arg1 ;
-(int)activate;
-(void)invalidate;
-(NSString *)logFilePath;
-(void)dealloc;
@end

