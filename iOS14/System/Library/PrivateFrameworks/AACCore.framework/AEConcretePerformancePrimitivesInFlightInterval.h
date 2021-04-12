/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/

#import <libobjc.A.dylib/AEPerformancePrimitivesInFlightInterval.h>

@protocol OS_os_log;
@class NSString, NSObject;

@interface AEConcretePerformancePrimitivesInFlightInterval : NSObject <AEPerformancePrimitivesInFlightInterval> {

	BOOL _isEnded;
	NSString* _name;
	unsigned long long _signpostID;
	NSObject*<OS_os_log> _log;

}
-(void)endInterval;
-(void)dealloc;
@end

