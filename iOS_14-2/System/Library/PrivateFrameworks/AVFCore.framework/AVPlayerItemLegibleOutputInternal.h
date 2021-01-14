/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVPlayerItemLegibleOutputDependencyFactory, OS_dispatch_queue;
@class NSArray, AVWeakReferencingDelegateStorage, NSObject, AVWeakReference, NSString;

@interface AVPlayerItemLegibleOutputInternal : NSObject {

	id<AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
	NSArray* nativeRepresentationSubtypes;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVWeakReference* weakReferenceToHost;
	BOOL suppressesPlayerRendering;
	double advanceInterval;
	NSString* textStylingResolution;

}
@end

