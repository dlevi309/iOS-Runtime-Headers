/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


@protocol OS_dispatch_queue;
@class AXPhoenixConfiguration, NSDateFormatter, NSString, NSObject;

@interface AXPhoenixAnalytics : NSObject {

	AXPhoenixConfiguration* _configuration;
	NSDateFormatter* _dateFormatter;
	NSString* _modelVersion;
	unsigned long long _assetVersion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_descriptionForEventType:(long long)arg1 ;
-(void)_sendEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConfiguration:(id)arg1 modelVersion:(id)arg2 assetVersion:(unsigned long long)arg3 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

