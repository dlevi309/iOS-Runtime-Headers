/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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
-(AVPlayerItem *)item;
-(long long)modificationType;
-(AVPlayerItem *)afterItem;
-(id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3 ;
-(void)dealloc;
@end

