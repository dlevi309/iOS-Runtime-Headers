/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

