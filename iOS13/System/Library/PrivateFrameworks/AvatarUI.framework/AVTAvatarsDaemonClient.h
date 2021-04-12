/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarsDaemon.h>

@protocol AVTUILogger;
@interface AVTAvatarsDaemonClient : NSObject <AVTAvatarsDaemon> {

	id<AVTUILogger> _logger;
	/*^block*/id _connectionFactory;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy,readonly) id connectionFactory;              //@synthesize connectionFactory=_connectionFactory - In the implementation block
-(void)checkIn;
-(id<AVTUILogger>)logger;
-(id)initWithLogger:(id)arg1 ;
-(id)connectionFactory;
-(id)initWithConnectionFactory:(/*^block*/id)arg1 logger:(id)arg2 ;
-(void)performWorkWithConnection:(/*^block*/id)arg1 ;
-(void)performWorkWithSynchronousProxy:(/*^block*/id)arg1 ;
@end

