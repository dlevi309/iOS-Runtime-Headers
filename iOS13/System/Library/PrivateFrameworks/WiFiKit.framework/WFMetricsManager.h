/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
@class AWDServerConnection, NSObject, NSString, NSMutableDictionary;

@interface WFMetricsManager : NSObject {

	AWDServerConnection* _server;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSString* _processName;
	NSMutableDictionary* _ssidHashes;

}

@property (nonatomic,retain) AWDServerConnection * server;                          //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
@property (nonatomic,copy) NSString * processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ssidHashes;                      //@synthesize ssidHashes=_ssidHashes - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setServer:(AWDServerConnection *)arg1 ;
-(AWDServerConnection *)server;
-(void)processEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(NSMutableDictionary *)ssidHashes;
-(id)SHAForSSID:(id)arg1 ;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSsidHashes:(NSMutableDictionary *)arg1 ;
@end

