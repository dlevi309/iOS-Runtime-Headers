/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSDictionary, NSSet;

@interface SKUILoadItemsResponse : NSObject {

	NSDictionary* _loadedItems;
	NSSet* _invalidItemIdentifiers;

}

@property (nonatomic,copy) NSDictionary * loadedItems;                  //@synthesize loadedItems=_loadedItems - In the implementation block
@property (nonatomic,copy) NSSet * invalidItemIdentifiers;              //@synthesize invalidItemIdentifiers=_invalidItemIdentifiers - In the implementation block
-(void)setLoadedItems:(NSDictionary *)arg1 ;
-(NSDictionary *)loadedItems;
-(void)setInvalidItemIdentifiers:(NSSet *)arg1 ;
-(NSSet *)invalidItemIdentifiers;
@end

