/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@interface AVVCAlertInformation : NSObject {

	int _type;
	long long _mode;
	unsigned long long _alertEndTime;

}

@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long mode;                               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long alertEndTime;              //@synthesize alertEndTime=_alertEndTime - In the implementation block
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)initWithAlertType:(int)arg1 mode:(long long)arg2 endTime:(unsigned long long)arg3 ;
-(unsigned long long)alertEndTime;
-(void)setAlertEndTime:(unsigned long long)arg1 ;
@end

