/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)connectionFactory;
-(id)initWithLogger:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(id)initWithConnectionFactory:(/*^block*/id)arg1 logger:(id)arg2 ;
-(void)performWorkWithConnection:(/*^block*/id)arg1 ;
-(void)performWorkWithSynchronousProxy:(/*^block*/id)arg1 ;
@end

