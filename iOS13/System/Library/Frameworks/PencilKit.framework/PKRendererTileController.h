/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKRendererTileController : NSObject {

	NSObject*<OS_dispatch_queue> _tileQueue;
	NSMutableDictionary* _tileFramebuffers;

}
+(id)sharedController;
-(id)init;
-(id)framebufferForTile:(id)arg1 createIfNeeded:(BOOL)arg2 device:(id)arg3 pixelFormat:(unsigned long long)arg4 clearFramebufferBlock:(/*^block*/id)arg5 ;
-(void)didTeardownTile:(id)arg1 ;
@end

