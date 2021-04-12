/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSMutableArray;

@interface NUFeedSection : NSObject {

	NSMutableArray* _items;

}

@property (nonatomic,readonly) NSMutableArray * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems; 
-(id)init;
-(NSMutableArray *)items;
-(unsigned long long)numberOfItems;
-(id)itemAtIndex:(unsigned long long)arg1 ;
@end

