/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@interface APCPlayerEmbedInfo : NSObject {

	unsigned long long _estPasscodeDuration;
	unsigned long long _measPasscodeDuration;

}

@property (nonatomic,readonly) unsigned long long estPasscodeDuration;              //@synthesize estPasscodeDuration=_estPasscodeDuration - In the implementation block
@property (assign,nonatomic) unsigned long long measPasscodeDuration;               //@synthesize measPasscodeDuration=_measPasscodeDuration - In the implementation block
-(BOOL)isValid;
-(id)initWithPasscodeDurationNSec:(unsigned long long)arg1 ;
-(unsigned long long)estPasscodeDuration;
-(unsigned long long)measPasscodeDuration;
-(void)setMeasPasscodeDuration:(unsigned long long)arg1 ;
@end

