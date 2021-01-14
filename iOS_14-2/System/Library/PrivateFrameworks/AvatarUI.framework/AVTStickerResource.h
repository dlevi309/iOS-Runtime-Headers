/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,getter=isPrereleaseSticker,nonatomic) BOOL prereleaseSticker;              //@synthesize prereleaseSticker=_prereleaseSticker - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) CGRect clippingRect;                                          //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(UIImage *)image;
-(NSURL *)URL;
-(CGRect)clippingRect;
-(BOOL)isPrereleaseSticker;
-(void)setPrereleaseSticker:(BOOL)arg1 ;
-(AVTUINSURL *)internalURL;
-(void)setInternalURL:(AVTUINSURL *)arg1 ;
-(id)initWithImage:(id)arg1 URL:(id)arg2 clippingRect:(CGRect)arg3 ;
@end

