/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class TSgPTPPort;

@interface __TSgPTPPortNotification : NSObject {

	TSgPTPPort* _port;

}

@property (assign,nonatomic,__weak) TSgPTPPort * port;              //@synthesize port=_port - In the implementation block
-(TSgPTPPort *)port;
-(void)setPort:(TSgPTPPort *)arg1 ;
@end

