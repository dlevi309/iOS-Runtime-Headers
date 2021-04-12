/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFairPlayContext:(unsigned)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(id)sicWithPic:(id)arg1 ;
-(id)initWithFairPlayContext:(unsigned)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createPicRequestWithError:(id*)arg1 ;
-(id)initWithFairPlayContext:(unsigned)arg1 routeInfo:(id)arg2 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg3 mediaControlUUID:(id)arg4 ;
-(id)legacySinfs;
-(id)mediaControlParamsWithStoreResponse:(id)arg1 ;
-(void)authorizeItemCompletionHandler_objc:(SCD_Struct_Fi39*)arg1 picData:(CFDataRef)arg2 playerGUID:(CFStringRef)arg3 error:(int)arg4 ;
-(void)endSession;
-(void)dealloc;
@end

