/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVStreamDataParserOutputHandling, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
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
	SCD_Struct_AV7 _samplesBeforeReadyTotalDuration;
	NSMutableDictionary* _trackDecryptorsByTrackID;
	NSMutableDictionary* _trackFormatDescriptionsByTrackID;

}
@end

