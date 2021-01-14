/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MTIDCloudKitPromiseManager : NSObject {

	NSMutableDictionary* _dict;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSMutableDictionary * dict;                              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dict;
-(id)initWithCallbackQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)waitForRecordDidSync:(id)arg1 timeout:(double)arg2 ;
-(void)recordDidSync:(id)arg1 ;
@end

