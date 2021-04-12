/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol OS_dispatch_queue;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSObject;

@interface TKPowerMonitor : NSObject {

	IONotificationPortRef _portRef;
	unsigned _handle;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _awaken;
	unsigned _kernelPort;

}

@property (assign) unsigned kernelPort;              //@synthesize kernelPort=_kernelPort - In the implementation block
@property (assign) BOOL awaken;                      //@synthesize awaken=_awaken - In the implementation block
+(id)defaultMonitor;
-(id)init;
-(unsigned)kernelPort;
-(void)setKernelPort:(unsigned)arg1 ;
-(BOOL)awaken;
-(void)setAwaken:(BOOL)arg1 ;
@end

