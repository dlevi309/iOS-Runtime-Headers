/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVExternalDeviceDelegate, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, AVDispatchOnce, NSData, NSObject, NSMutableDictionary;

@interface AVExternalDeviceInternal : NSObject {

	OpaqueFigEndpointRef _figEndpoint;
	id<AVExternalDeviceDelegate> _delegate;
	AVWeakReference* _weakReference;
	NSArray* _HIDs;
	AVDispatchOnce* _makeHIDsOnlyOnce;
	NSData* _MFiCertSerial;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _oemIcons;
	NSArray* _screenInfo;
	NSObject*<OS_dispatch_queue> _viewAreasQueue;
	NSMutableDictionary* _currentViewAreas;
	AVDispatchOnce* _makeIconsOnlyOnce;

}
@end

