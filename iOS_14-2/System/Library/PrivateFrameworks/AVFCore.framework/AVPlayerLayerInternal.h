/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVNetworkPlaybackPerfHUDLayer, NSObject, AVKeyPathDependencyManager, AVPlayer, NSString, NSDictionary, FigBaseCALayer, FigVideoContainerLayer, FigSubtitleCALayer, AVPlayerLayer, NSSet, CALayer;

@interface AVPlayerLayerInternal : NSObject {

	AVNetworkPlaybackPerfHUDLayer* hudLayer;
	NSObject*<OS_dispatch_queue> serialQueue;
	BOOL isPresentationLayer;
	OpaqueFigSimpleMutexRef isReadyForDisplayMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	AVKeyPathDependencyManager* dependencyManager;
	id playerItemHasEnqueuedVideoFrameListener;
	id windowSceneDidEnterBackgroundListener;
	id windowSceneWillEnterForegroundListener;
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
	NSEdgeInsets legibleContentInsets;
	BOOL honorContentScale;
	double screenScale;
	BOOL isVisible;

}
@end

