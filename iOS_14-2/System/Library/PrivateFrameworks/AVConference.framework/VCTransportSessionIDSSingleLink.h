/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCTransportSessionIDS.h>

@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS
-(int)onStart;
-(id)initWithNotificationQueue:(id)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(int)createVFD:(int*)arg1 forStreamType:(unsigned)arg2 ;
-(void)handleLinkConnectedWithInfo:(id)arg1 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg1 ;
-(int)updateTransportStream:(OpaqueVCTransportStreamRef)arg1 ;
@end

