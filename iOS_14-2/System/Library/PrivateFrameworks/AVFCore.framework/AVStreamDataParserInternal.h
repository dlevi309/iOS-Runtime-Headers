/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVStreamDataParserOutputHandling, OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject, NSError, AVAsset, NSMutableArray, AVWeakReference, AVContentKeySession, AVContentKeyRequest, NSMutableDictionary;

@interface AVStreamDataParserInternal : NSObject {

	id<AVStreamDataParserOutputHandling> _delegate;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	long long _status;
	NSError* _error;
	AVAsset* _asset;
	NSMutableArray* _trackIDsNotProvidingMedia;
	OpaqueFigManifoldRef _figManifold;
	unsigned long long _typeIdOfInitialFigManifold;
	OpaqueCMBlockBufferRef _accumulatedInitializationData;
	BOOL _encounteredStreamDiscontinuity;
	AVWeakReference* _legacyStreamSession;
	AVContentKeySession* _defaultContentKeySession;
	AVWeakReference* _contentKeySession;
	AVContentKeyRequest* _sessionKeyRequest;
	BOOL _startedUsingInternalContentKeySession;
	int _currentTrackID;
	NSMutableDictionary* _tracksBecomingReadyByTrackID;
	NSMutableArray* _samplesBeforeReady;
	unsigned long long _samplesBeforeReadyTotalSize;
	SCD_Struct_AV6 _samplesBeforeReadyTotalDuration;
	NSMutableDictionary* _trackDecryptorsByTrackID;
	NSMutableDictionary* _trackFormatDescriptionsByTrackID;

}
@end

