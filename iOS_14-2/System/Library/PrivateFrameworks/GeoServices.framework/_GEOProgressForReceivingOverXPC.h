/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <Foundation/NSProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface _GEOProgressForReceivingOverXPC : NSProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithEndpoint:(id)arg1 ;
-(id)initVendingEndpoint:(id*)arg1 ;
-(void)_handleEvent:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

