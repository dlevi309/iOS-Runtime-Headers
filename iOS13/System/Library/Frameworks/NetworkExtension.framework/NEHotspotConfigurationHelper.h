/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue;
@class NEHelper, NSObject;

@interface NEHotspotConfigurationHelper : NSObject {

	NEHelper* _helper;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NEHelper * helper; 
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NEHelper *)helper;
-(id)createXPCRequest:(id)arg1 requestType:(long long)arg2 ;
-(id)processQueryNetworksResponse:(id)arg1 ;
-(void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

