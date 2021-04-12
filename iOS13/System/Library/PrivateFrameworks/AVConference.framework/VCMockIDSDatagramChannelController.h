/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@class VCMockIDSDatagramChannel;

@interface VCMockIDSDatagramChannelController : VCObject {

	VCMockIDSDatagramChannel* _datagramChannel;

}
+(id)sharedInstance;
-(void)invalidate;
-(id)datagramChannelRequiresOptions:(BOOL)arg1 ;
-(void)setWriteDatagramsBlock:(/*^block*/id)arg1 ;
-(void)setWriteDatagramBlock:(/*^block*/id)arg1 ;
-(void)setReadyToReadBlock:(/*^block*/id)arg1 ;
@end

