/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol OS_dispatch_source;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary, NSObject;

@interface SCROBrailleDisplayAutoDetector : NSObject {

	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;
	NSObject*<OS_dispatch_source> _serialSource;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedDetector;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_driverBundleIdentifiers;
-(void)_autodetectIOServices:(id)arg1 ;
-(void)_initializeAutodetectSerialPorts:(id)arg1 ;
-(BOOL)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3 ;
-(void)serialPortsWerePublished:(unsigned)arg1 ;
-(void)_detectSerialPorts:(id)arg1 ;
-(id)_serialPortMatchingDictionary;
-(void)_registerForSerialPortNotifications;
-(void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2 ;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
@end

