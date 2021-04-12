/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/CLKUIAtlas.h>

@protocol MTLTexture, OS_dispatch_queue;
@class NSObject;

@interface CLKUIMetalAtlas : CLKUIAtlas {

	id<MTLTexture> _texture;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	id<MTLTexture> _loaderQueue_prewarmedTexture;
	unsigned long long _mainQueue_prewarmState;

}
+(id)_createMTLTextureWithBacking:(id)arg1 device:(id)arg2 encoder:(id)arg3 ;
-(void)prewarm;
-(void)purge;
-(void)dealloc;
-(void)bind:(id)arg1 slot:(unsigned long long)arg2 ;
-(id)initWithUuid:(id)arg1 ;
@end

