/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSMutableArray, QLItem;

@interface QLCacheItem : NSObject {

	NSMutableArray* _handlers;
	QLItem* _item;

}

@property (nonatomic,retain) QLItem * item;              //@synthesize item=_item - In the implementation block
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(QLItem *)item;
-(void)setItem:(QLItem *)arg1 ;
-(void)invalidate;
-(void)_performHandlers;
@end

