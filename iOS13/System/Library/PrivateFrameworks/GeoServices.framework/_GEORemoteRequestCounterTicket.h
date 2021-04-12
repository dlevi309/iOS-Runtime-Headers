/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEORequestCounterTicket.h>

@protocol OS_nw_activity;
@class NSString, GEORequestCounterRemoteProxy, NSObject;

@interface _GEORemoteRequestCounterTicket : NSObject <GEORequestCounterTicket> {

	long long _subTaskXmitBytes;
	long long _subTaskRecvBytes;
	NSString* _appId;
	NSString* _requestId;
	GEORequestCounterRemoteProxy* _remoteProxy;
	NSObject*<OS_nw_activity> _nwActivity;
	_GEORemoteRequestCounterTicket* _parentTask;
	BOOL _logNetworkActivityOnly;
	BOOL _complete;
	unsigned char _type;
	unsigned char _subtasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 ;
+(id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 remoteProxy:(id)arg3 ;
+(id)_requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 withParent:(id)arg3 logNetworkActivityOnly:(BOOL)arg4 ;
-(NSString *)description;
-(id)createSubtask:(BOOL)arg1 ;
-(void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3 ;
-(void)_subTask:(id)arg1 completedWithResult:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4 ;
-(void)startingRequestWithTask:(id)arg1 ;
@end

