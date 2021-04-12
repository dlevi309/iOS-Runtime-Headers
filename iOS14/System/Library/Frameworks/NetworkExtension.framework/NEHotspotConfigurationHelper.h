/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NEHelper *)helper;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)createXPCRequest:(id)arg1 requestType:(long long)arg2 ;
-(id)processQueryNetworksResponse:(id)arg1 ;
-(void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

