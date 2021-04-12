/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@class VCMockIDSDatagramChannel;

@interface VCMockIDSDatagramChannelController : VCObject {

	VCMockIDSDatagramChannel* _datagramChannel;

}
+(id)sharedInstance;
-(void)invalidate;
-(void)dealloc;
-(id)datagramChannelRequiresOptions:(BOOL)arg1 ;
-(void)setWriteDatagramsBlock:(/*^block*/id)arg1 ;
-(void)setWriteDatagramBlock:(/*^block*/id)arg1 ;
-(void)setReadyToReadBlock:(/*^block*/id)arg1 ;
@end

