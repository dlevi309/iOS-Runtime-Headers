/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKProducerBundle.h>

@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle {

	OKProducerPlugin* _plugin;

}

@property (assign,nonatomic) OKProducerPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoaded;
-(OKProducerPlugin *)plugin;
-(void)setPlugin:(OKProducerPlugin *)arg1 ;
@end

