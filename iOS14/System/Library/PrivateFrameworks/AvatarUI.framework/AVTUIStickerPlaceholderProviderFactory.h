/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSMutableArray;

@interface AVTUIStickerPlaceholderProviderFactory : NSObject {

	NSMutableArray* _queuedHandlers;
	/*^block*/id _imageProvider;

}

@property (nonatomic,retain) NSMutableArray * queuedHandlers;              //@synthesize queuedHandlers=_queuedHandlers - In the implementation block
@property (nonatomic,readonly) id imageProvider;                           //@synthesize imageProvider=_imageProvider - In the implementation block
-(id)initWithImageProvider:(/*^block*/id)arg1 ;
-(NSMutableArray *)queuedHandlers;
-(void)setQueuedHandlers:(NSMutableArray *)arg1 ;
-(/*^block*/id)placeholderProvider;
-(id)imageProvider;
@end

