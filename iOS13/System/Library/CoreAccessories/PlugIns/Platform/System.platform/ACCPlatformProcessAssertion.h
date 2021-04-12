/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/System.platform/System
*/

#import <AssertionServices/BKSProcessAssertion.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface ACCPlatformProcessAssertion : BKSProcessAssertion {

	unsigned long long _startTime;
	NSObject*<OS_dispatch_source> _processAssertionTimer;

}

@property (assign,nonatomic) unsigned long long startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> processAssertionTimer;              //@synthesize processAssertionTimer=_processAssertionTimer - In the implementation block
-(void)dealloc;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_source>)processAssertionTimer;
-(void)setProcessAssertionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

