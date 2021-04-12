/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSOrderedSet;

@interface NMSMediaDownloadInfo : NSObject {

	NSOrderedSet* _items;

}

@property (nonatomic,readonly) NSOrderedSet * items;              //@synthesize items=_items - In the implementation block
-(id)description;
-(NSOrderedSet *)items;
-(id)initWithItems:(id)arg1 ;
-(void)enumerateMediaItemsUsingBlock:(/*^block*/id)arg1 ;
@end

