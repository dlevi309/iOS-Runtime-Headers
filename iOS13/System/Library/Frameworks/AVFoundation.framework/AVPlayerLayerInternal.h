/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVNetworkPlaybackPerfHUDLayer, NSObject, AVKeyPathDependencyManager, AVPlayer, NSString, NSDictionary, FigBaseCALayer, FigVideoContainerLayer, FigSubtitleCALayer, AVPlayerLayer, NSSet, CALayer;

@interface AVPlayerLayerInternal : NSObject {

	AVNetworkPlaybackPerfHUDLayer* hudLayer;
	NSObject*<OS_dispatch_queue> serialQueue;
	BOOL isPresentationLayer;
	OpaqueFigSimpleMutexRef isReadyForDisplayMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	AVKeyPathDependencyManager* dependencyManager;
	id playerItemHasEnqueuedVideoFrameListener;
	AVPlayer* player;
	NSString* videoGravity;
	NSDictionary* pixelBufferAttributes;
	BOOL lanczosDownscalingEnabled;
	long long lanczosDownscalingFactor;
	FigBaseCALayer* maskLayer;
	FigVideoContainerLayer* videoLayer;
	FigSubtitleCALayer* subtitleLayer;
	FigBaseCALayer* closedCaptionLayer;
	BOOL isLegibleDisplayEnabled;
	BOOL isForScrubbingOnly;
	AVPlayerLayer* associatedRemoteModeLayer;
	BOOL willManageSublayersAsSwappedLayers;
	long long activeMode;
	BOOL isPartOfForegroundScene;
	BOOL isReadyForDisplay;
	AVPlayer* playerBeingObserved;
	NSSet* KVOInvokers;
	CGSize latestAppliedPresentationSize;
	BOOL preventsChangesToSublayerHierarchy;
	NSDictionary* clientLayers;
	BOOL isPIPModeEnabled;
	CALayer* placeholderContentLayerDuringPIPMode;
	BOOL isConnectedToSecondScreen;
	BOOL honorContentScale;
	double screenScale;

}
@end

