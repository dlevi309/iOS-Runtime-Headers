/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDispatchQueue:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(void)activate;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(void)cancel;
-(id)getHIDDevices;
-(BOOL)setupIOReporting;
-(void)setInputDataHandler:(/*^block*/id)arg1 ;
-(BOOL)setOutputData:(id)arg1 error:(id*)arg2 ;
@end

