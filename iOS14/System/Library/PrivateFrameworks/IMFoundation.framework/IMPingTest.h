/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_dispatch_source;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSString, NSObject;

@interface IMPingTest : NSObject {

	NSString* _address;
	BOOL _usesWifi;
	id _collector;
	BOOL _isRunning;
	NSObject*<OS_dispatch_source> _sendTimer;
	NSObject*<OS_dispatch_source> _socketReadSource;
	double _secondsToRun;

}

@property (nonatomic,readonly) double secondsToRun;              //@synthesize secondsToRun=_secondsToRun - In the implementation block
-(void)stop;
-(double)secondsToRun;
-(id)initWithAddress:(id)arg1 wifi:(BOOL)arg2 ;
-(BOOL)writeResultsToFile:(id)arg1 error:(id*)arg2 ;
-(void)startWithTimeout:(double)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)pingStats:(double)arg1 ;
-(double)longTimeInterval;
-(int)_setupAndPerformPing:(double)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_doPingWithSocket:(int)arg1 address:(sockaddr_in)arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_setupReadSource:(int)arg1 address:(sockaddr_in)arg2 icmID:(unsigned short)arg3 queue:(id)arg4 completionHander:(/*^block*/id)arg5 ;
-(id)pingStats;
-(void)dealloc;
@end

