/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDecryptionCompletedEvent : HMDLogEvent {

	BOOL _didDecryptionFail;

}

@property (assign,nonatomic) BOOL didDecryptionFail;              //@synthesize didDecryptionFail=_didDecryptionFail - In the implementation block
+(id)uuid;
+(id)decryptionCompletedWithFailure:(BOOL)arg1 ;
-(id)initWithFailure:(BOOL)arg1 ;
-(BOOL)didDecryptionFail;
-(void)setDidDecryptionFail:(BOOL)arg1 ;
@end

