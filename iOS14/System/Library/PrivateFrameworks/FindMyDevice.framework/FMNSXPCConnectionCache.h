/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface FMNSXPCConnectionCache : NSObject {

	NSObject*<OS_dispatch_queue> _modsSerialQueue;
	NSMutableDictionary* _connectionsByServiceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modsSerialQueue;                //@synthesize modsSerialQueue=_modsSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionsByServiceName;              //@synthesize connectionsByServiceName=_connectionsByServiceName - In the implementation block
+(id)sharedCache;
-(id)init;
-(id)resumeConnectionWithConfiguration:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)modsSerialQueue;
-(NSMutableDictionary *)connectionsByServiceName;
-(void)setModsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionsByServiceName:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

