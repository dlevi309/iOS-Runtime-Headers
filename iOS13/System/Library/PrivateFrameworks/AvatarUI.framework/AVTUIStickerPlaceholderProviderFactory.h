/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSMutableArray;

@interface AVTUIStickerPlaceholderProviderFactory : NSObject {

	NSMutableArray* _queuedHandlers;
	/*^block*/id _imageProvider;

}

@property (nonatomic,retain) NSMutableArray * queuedHandlers;              //@synthesize queuedHandlers=_queuedHandlers - In the implementation block
@property (nonatomic,readonly) id imageProvider;                           //@synthesize imageProvider=_imageProvider - In the implementation block
-(id)imageProvider;
-(/*^block*/id)placeholderProvider;
-(id)initWithImageProvider:(/*^block*/id)arg1 ;
-(NSMutableArray *)queuedHandlers;
-(void)setQueuedHandlers:(NSMutableArray *)arg1 ;
@end

