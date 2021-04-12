/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStartTime:(unsigned long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(unsigned long long)startTime;
-(NSObject*<OS_dispatch_source>)processAssertionTimer;
-(void)dealloc;
-(void)setProcessAssertionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

