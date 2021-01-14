/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRVVIClient : NSObject {

	NSMutableDictionary* _deviceIDToCallbackMap;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedClient;
-(id)init;
-(void)setRecordingStateCallback:(/*^block*/id)arg1 forDeviceID:(unsigned)arg2 ;
-(void)_recordingStateChangedNotification:(id)arg1 ;
-(void)dealloc;
@end

