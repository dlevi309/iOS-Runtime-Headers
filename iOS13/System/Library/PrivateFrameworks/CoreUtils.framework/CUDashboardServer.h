/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(int)activate;
-(void)_readHandler:(int)arg1 ;
-(NSString *)logFilePath;
-(void)setLogFilePath:(NSString *)arg1 ;
@end

