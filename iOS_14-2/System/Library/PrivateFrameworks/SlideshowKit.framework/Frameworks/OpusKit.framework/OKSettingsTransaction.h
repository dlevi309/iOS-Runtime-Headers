/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface OKSettingsTransaction : NSObject {

	NSMutableArray* _items;
	NSMutableDictionary* _itemsByKey;

}

@property (nonatomic,retain,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(id)init;
-(NSArray *)items;
-(void)dealloc;
-(void)mergeWithTransaction:(id)arg1 ;
-(void)registerTransactionItem:(id)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
@end

