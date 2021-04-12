/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setRecordingStateCallback:(/*^block*/id)arg1 forDeviceID:(unsigned)arg2 ;
-(void)_recordingStateChangedNotification:(id)arg1 ;
@end

