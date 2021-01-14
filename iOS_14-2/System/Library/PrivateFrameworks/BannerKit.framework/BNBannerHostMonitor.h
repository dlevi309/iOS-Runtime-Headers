/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, BSServiceConnection;

@interface BNBannerHostMonitor : NSObject {

	NSString* _machName;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	BOOL _active;
	BSServiceConnection* _connection;

}

@property (setter=_setConnection:,getter=_connection,nonatomic,retain) BSServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,setter=_setActive:,getter=isActive,nonatomic) BOOL active;                                          //@synthesize active=_active - In the implementation block
+(void)initialize;
-(BOOL)isActive;
-(void)deactivate;
-(void)activate;
-(id)description;
-(id)initWithMachName:(id)arg1 ;
-(void)_invalidateConnection;
-(void)_setActive:(BOOL)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(id)_connection;
-(id)_activeConnection;
-(void)dealloc;
@end

