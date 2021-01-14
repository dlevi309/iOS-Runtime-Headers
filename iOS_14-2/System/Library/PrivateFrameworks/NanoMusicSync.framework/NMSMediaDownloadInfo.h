/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSOrderedSet;

@interface NMSMediaDownloadInfo : NSObject {

	NSOrderedSet* _items;

}

@property (nonatomic,readonly) NSOrderedSet * items;              //@synthesize items=_items - In the implementation block
-(id)initWithItems:(id)arg1 ;
-(NSOrderedSet *)items;
-(id)description;
-(void)enumerateMediaItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)mediaItemIdentifiers;
@end

