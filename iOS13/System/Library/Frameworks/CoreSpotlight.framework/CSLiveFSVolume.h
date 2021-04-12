/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <CoreSpotlight/CoreSpotlight-Structs.h>
@class NSURL, NSString, NSObject;

@interface CSLiveFSVolume : NSObject {

	NSURL* _volumeURL;
	NSString* _volumeName;
	NSObject*<OS_dispatch_queue> _queue;
	const char* _volumeNameCString;
	unsigned long long _volumeNameCStringLength;
	NSObject*<OS_xpc_object> _delayedObject;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) const char* volumeNameCString;                           //@synthesize volumeNameCString=_volumeNameCString - In the implementation block
@property (nonatomic,readonly) unsigned long long volumeNameCStringLength;              //@synthesize volumeNameCStringLength=_volumeNameCStringLength - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> delayedObject;                    //@synthesize delayedObject=_delayedObject - In the implementation block
@property (nonatomic,readonly) NSURL * volumeURL;                                       //@synthesize volumeURL=_volumeURL - In the implementation block
@property (nonatomic,readonly) NSString * volumeName;                                   //@synthesize volumeName=_volumeName - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithVolumeURL:(id)arg1 ;
-(id)initWithVolumeName:(id)arg1 ;
-(void)_handleDelayedEvent;
-(int)sendCSLiveFSEvent:(CSLiveEventInfo*)arg1 ;
-(void)sendEventOfType:(int)arg1 pid:(int)arg2 path:(const char*)arg3 pathLength:(unsigned long long)arg4 attributes:(id)arg5 ;
-(void)sendDeleteEventForPID:(int)arg1 path:(const char*)arg2 pathLength:(unsigned long long)arg3 ;
-(void)sendPairedEventOfType:(int)arg1 pid:(int)arg2 fromPath:(const char*)arg3 fromPathLength:(unsigned long long)arg4 fromAttributes:(id)arg5 toPath:(const char*)arg6 toPathLength:(unsigned long long)arg7 toAttributes:(id)arg8 ;
-(void)sendXattrModifiedEventForPID:(int)arg1 path:(const char*)arg2 pathLength:(unsigned long long)arg3 xAttrName:(id)arg4 xAttrValue:(id)arg5 attributes:(id)arg6 ;
-(void)sendXattrRemovedEventForPID:(int)arg1 path:(const char*)arg2 pathLength:(unsigned long long)arg3 xAttrName:(id)arg4 attributes:(id)arg5 ;
-(BOOL)isInterestingPath:(const char*)arg1 ;
-(NSURL *)volumeURL;
-(NSString *)volumeName;
-(const char*)volumeNameCString;
-(unsigned long long)volumeNameCStringLength;
-(NSObject*<OS_xpc_object>)delayedObject;
-(void)setDelayedObject:(NSObject*<OS_xpc_object>)arg1 ;
@end

