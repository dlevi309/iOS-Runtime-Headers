/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject {

	long long _modificationType;
	AVPlayerItem* _item;
	AVPlayerItem* _afterItem;

}

@property (nonatomic,readonly) long long modificationType;              //@synthesize modificationType=_modificationType - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * afterItem;                //@synthesize afterItem=_afterItem - In the implementation block
+(id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2 ;
+(id)modificationForRemovingItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(AVPlayerItem *)item;
-(long long)modificationType;
-(AVPlayerItem *)afterItem;
-(id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3 ;
@end

