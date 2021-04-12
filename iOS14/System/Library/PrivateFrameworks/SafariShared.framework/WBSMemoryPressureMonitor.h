/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPressured:(BOOL)arg1 ;
-(BOOL)pressured;
-(void)dealloc;
@end

