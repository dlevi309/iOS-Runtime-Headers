/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

