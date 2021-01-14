/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/_GEOMirroredProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _GEOProgressForSendingOverXPC : _GEOMirroredProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _endpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _remoteConnections;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(id)initWithMirroredProgress:(id)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)initWithMirroredProgress:(id)arg1 endpoint:(id)arg2 ;
-(void)_connectionDidInvalidate;
-(void)_update;
-(void)_broadcastOverXPCConnections:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

