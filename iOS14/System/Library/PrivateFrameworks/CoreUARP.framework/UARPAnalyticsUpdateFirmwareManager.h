/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class UARPController, NSMutableArray, NSObject;

@interface UARPAnalyticsUpdateFirmwareManager : NSObject {

	UARPController* _controller;
	NSMutableArray* _stateArray;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _purgeTimer;

}
-(id)description;
-(void)dealloc;
-(void)configurePurgeTimer;
-(void)purgeStaleUpdateStateRecords;
-(id)updateStateForAccessoryID:(id)arg1 assetID:(id)arg2 ;
-(void)updateComplete:(id)arg1 ;
-(id)updateStatesForAccessoryID:(id)arg1 ;
-(id)initWithController:(id)arg1 queue:(id)arg2 ;
-(void)stagingStartedForAccessoryID:(id)arg1 assetID:(id)arg2 userIntent:(BOOL)arg3 ;
-(void)stagingCompleteForAccessoryID:(id)arg1 assetID:(id)arg2 status:(unsigned long long)arg3 ;
-(void)setAccessoryIDUnreachable:(id)arg1 ;
@end

