/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVExternalDeviceDelegate, OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
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

