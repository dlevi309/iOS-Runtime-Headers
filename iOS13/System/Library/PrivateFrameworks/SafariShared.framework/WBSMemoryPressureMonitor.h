/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface WBSMemoryPressureMonitor : NSObject {

	NSObject*<OS_dispatch_source> _memoryPressureSource;
	BOOL _pressured;

}

@property (assign) BOOL pressured;              //@synthesize pressured=_pressured - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setPressured:(BOOL)arg1 ;
-(BOOL)pressured;
@end

