/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/


@class NSMutableArray, NSXPCConnection, NSString, APUnfairLock;

@interface APXPCRemoteConnection : NSObject {

	int _numClients;
	NSMutableArray* _delegates;
	NSXPCConnection* _xpcConnection;
	NSString* _machService;
	APUnfairLock* _unfairLock;

}

@property (assign,nonatomic) int numClients;                               //@synthesize numClients=_numClients - In the implementation block
@property (nonatomic,retain) NSMutableArray * delegates;                   //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * machService;                     //@synthesize machService=_machService - In the implementation block
@property (nonatomic,readonly) APUnfairLock * unfairLock;                  //@synthesize unfairLock=_unfairLock - In the implementation block
+(id)sharedConnectionFor:(id)arg1 ;
+(id)connectionFor:(id)arg1 ;
+(id)connectionForMachService:(id)arg1 ;
+(void)addSharedConnection:(id)arg1 forMachService:(id)arg2 ;
+(id)sharedConnections;
+(void)removeSharedConnectionForMachService:(id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSMutableArray *)delegates;
-(APUnfairLock *)unfairLock;
-(NSXPCConnection *)xpcConnection;
-(void)connectionInvalidated;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)connectionInterrupted;
-(NSString *)machService;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)invalidateForDelegate:(id)arg1 ;
-(void)increaseConnectionCount;
-(void)decreaseConnectionCount;
-(int)numClients;
-(void)setNumClients:(int)arg1 ;
@end

