/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, AVWeakReference, NSURL, NSData, AVContentKeyReportGroup, NSObject, NSHashTable, NSString, NSMutableDictionary, NSMutableArray, NSMapTable;

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
	NSMapTable* cryptorUUIDToContentKeyRequestMap;
	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}
@end

