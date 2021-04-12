/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


#import <Email/Email-Structs.h>
@class NSMapTable, EMRemoteConnection;

@interface EMActivityRegistry : NSObject {

	NSMapTable* _observerWrappersByObserver;
	os_unfair_lock_s _lock;
	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)observerInterface;
+(id)remoteInterface;
-(id)initWithRemoteConnection:(id)arg1 ;
-(id)registerActivityObserver:(id)arg1 ;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
@end

