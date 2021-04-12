/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, AVWeakReference, NSURL, NSData, AVContentKeyReportGroup, NSObject, NSHashTable, NSString, NSMutableDictionary, NSMutableArray;

@interface AVContentKeySessionInternal : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReference* _weakReference;
	NSURL* _storageURL;
	NSData* _appIdentifier;
	BOOL _isExpired;
	BOOL _internal;
	AVContentKeyReportGroup* _defaultContentKeyGroup;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	NSHashTable* _contentKeyRecipients;
	NSString* _keySystem;
	NSMutableDictionary* keyRequestsByRequestID;
	NSMutableArray* _contentKeyGroups;
	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}
@end

