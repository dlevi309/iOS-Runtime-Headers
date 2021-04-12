/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANAnnounceReachabilityServiceInterfaceDelegate.h>

@protocol ANAnnounceReachabilityDelegate, OS_os_log;
@class NSXPCConnection, NSObject, NSString;

@interface ANAnnounceReachability : NSObject <ANAnnounceReachabilityServiceInterfaceDelegate> {

	id<ANAnnounceReachabilityDelegate> _delegate;
	NSXPCConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                                      //@synthesize log=_log - In the implementation block
@property (assign,nonatomic,__weak) id<ANAnnounceReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForAnnounceReachabilityLevel:(unsigned long long)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(id<ANAnnounceReachabilityDelegate>)delegate;
-(void)_start;
-(void)setDelegate:(id<ANAnnounceReachabilityDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(void)dealloc;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeName:(id)arg2 ;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomName:(id)arg2 inHomeName:(id)arg3 ;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeUUID:(id)arg2 ;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomUUID:(id)arg2 inHomeUUID:(id)arg3 ;
-(unsigned long long)announceReachabilityForHomeName:(id)arg1 ;
-(unsigned long long)announceReachabilityForRoomName:(id)arg1 inHomeName:(id)arg2 ;
-(unsigned long long)announceReachabilityForHomeUUID:(id)arg1 ;
-(unsigned long long)announceReachabilityForRoomUUID:(id)arg1 inHomeUUID:(id)arg2 ;
@end

