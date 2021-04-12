/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/


@class NSXPCConnection;

@interface USUsageReporter : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
+(void)synchronizeUsageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

