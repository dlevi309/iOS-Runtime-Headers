/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSDictionary, NSString, NSObject;

@interface FigCPEFPAirPlaySession : NSObject {

	BOOL _invalid;
	unsigned _fairPlayContext;
	NSDictionary* _protectionInfo;
	NSDictionary* _contentInfo;
	CFAllocatorRef _fairPlayDeallocator;
	OpaqueFigEndpointPlaybackSessionRef _playbackSession;
	NSString* _mediaControlUUID;
	unsigned _vodkaVersion;
	FPStreamOpaque_Ref _fairPlaySession;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}
-(void)dealloc;
-(void)endSession;
-(id)initWithFairPlayContext:(unsigned)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(id)initWithFairPlayContext:(unsigned)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFairPlayContext:(unsigned)arg1 routeInfo:(id)arg2 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg3 mediaControlUUID:(id)arg4 ;
-(id)sicWithPic:(id)arg1 ;
-(id)legacySinfs;
-(id)mediaControlParamsWithStoreResponse:(id)arg1 ;
-(id)createPicRequestWithError:(id*)arg1 ;
-(void)authorizeItemCompletionHandler_objc:(SCD_Struct_Fi34*)arg1 picData:(CFDataRef)arg2 playerGUID:(CFStringRef)arg3 error:(int)arg4 ;
@end

