/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTCachedResource.h>

@class UIImage, AVTUINSURL, NSURL;

@interface AVTStickerResource : NSObject <AVTCachedResource> {

	BOOL _prereleaseSticker;
	UIImage* _image;
	AVTUINSURL* _internalURL;
	CGRect _clippingRect;

}

@property (nonatomic,retain) AVTUINSURL * internalURL;                                       //@synthesize internalURL=_internalURL - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) CGRect clippingRect;                                          //@synthesize clippingRect=_clippingRect - In the implementation block
@property (assign,getter=isPrereleaseSticker,nonatomic) BOOL prereleaseSticker;              //@synthesize prereleaseSticker=_prereleaseSticker - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(UIImage *)image;
-(CGRect)clippingRect;
-(BOOL)isPrereleaseSticker;
-(void)setPrereleaseSticker:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 URL:(id)arg2 clippingRect:(CGRect)arg3 ;
-(AVTUINSURL *)internalURL;
-(void)setInternalURL:(AVTUINSURL *)arg1 ;
@end

