/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)remoteInterface;
+(id)observerInterface;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 ;
-(id)registerActivityObserver:(id)arg1 ;
@end

