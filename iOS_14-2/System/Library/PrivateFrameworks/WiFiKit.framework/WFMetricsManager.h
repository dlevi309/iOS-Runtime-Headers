/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setProcessName:(NSString *)arg1 ;
-(void)processEvent:(id)arg1 ;
-(id)init;
-(void)setServer:(AWDServerConnection *)arg1 ;
-(NSString *)processName;
-(AWDServerConnection *)server;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)ssidHashes;
-(id)SHAForSSID:(id)arg1 ;
-(void)setSsidHashes:(NSMutableDictionary *)arg1 ;
@end

