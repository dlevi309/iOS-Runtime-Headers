/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSString, APSConnection, NSObject, NSMutableArray;

@interface CKDPushConnection : NSObject {

	NSString* _apsEnvironmentString;
	APSConnection* _apsConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,retain) APSConnection * apsConnection;                                                //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                            //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (setter=setAPSEnvironmentString:,nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
+(id)sharedConnectionForAPSEnvironmentString:(id)arg1 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(NSMutableArray *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)setAPSEnvironmentString:(id)arg1 ;
-(NSString *)apsEnvironmentString;
-(void)getToken:(/*^block*/id)arg1 ;
@end

