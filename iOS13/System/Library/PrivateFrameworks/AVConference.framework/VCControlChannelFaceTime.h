/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCControlChannel.h>

@interface VCControlChannelFaceTime : VCControlChannel {

	unsigned _callID;
	tagHANDLE* _SIPHandle;

}
-(void)dealloc;
-(BOOL)sendReliableMessageAndWait:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)sendReliableMessage:(id)arg1 ;
@end

