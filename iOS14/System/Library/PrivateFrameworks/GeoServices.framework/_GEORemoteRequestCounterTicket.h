/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
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
	SCD_Struct_GE91 _type;
	unsigned char _subtasks;
	unsigned long long _signpostId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestCounterTicketForType:(SCD_Struct_GE91)arg1 appId:(id)arg2 remoteProxy:(id)arg3 ;
+(id)_requestCounterTicketForType:(SCD_Struct_GE91)arg1 appId:(id)arg2 withParent:(id)arg3 logNetworkActivityOnly:(BOOL)arg4 ;
+(id)requestCounterTicketForType:(SCD_Struct_GE91)arg1 appId:(id)arg2 ;
-(id)createSubtask:(BOOL)arg1 ;
-(void)startingRequestWithTask:(id)arg1 ;
-(NSString *)description;
-(void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3 ;
-(void)_subTask:(id)arg1 completedWithResult:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4 ;
@end

