/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

