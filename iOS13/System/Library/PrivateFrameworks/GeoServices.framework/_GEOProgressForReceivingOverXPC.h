/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <Foundation/NSProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface _GEOProgressForReceivingOverXPC : NSProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)cancel;
-(id)initWithEndpoint:(id)arg1 ;
-(void)_handleEvent:(id)arg1 ;
-(id)initVendingEndpoint:(id*)arg1 ;
@end

