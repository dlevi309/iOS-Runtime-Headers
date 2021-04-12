/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(void)_update;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)_connectionDidInvalidate;
-(void)_broadcastOverXPCConnections:(id)arg1 ;
-(id)initWithMirroredProgress:(id)arg1 endpoint:(id)arg2 ;
@end

