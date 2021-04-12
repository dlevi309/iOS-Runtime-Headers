/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@interface WFScanChannel : NSObject {

	long long _channel;
	long long _flags;

}

@property (assign,nonatomic) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) long long flags;                //@synthesize flags=_flags - In the implementation block
-(id)init;
-(id)description;
-(long long)flags;
-(long long)channel;
-(void)setFlags:(long long)arg1 ;
-(void)setChannel:(long long)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(long long)arg2 ;
@end

