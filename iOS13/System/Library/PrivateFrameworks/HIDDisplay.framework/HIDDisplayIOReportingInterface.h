/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HIDDisplayIOReportingInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;
	/*^block*/id _dataHandler;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)cancel;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)activate;
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(id)getHIDDevices;
-(BOOL)setupIOReporting;
-(void)setInputDataHandler:(/*^block*/id)arg1 ;
-(BOOL)setOutputData:(id)arg1 error:(id*)arg2 ;
@end

