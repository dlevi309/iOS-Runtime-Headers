/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SSWishlist, NSArray;

@interface SKUIWishlist : NSObject {

	SSWishlist* _database;

}

@property (nonatomic,readonly) long long accountIdentifier; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)activeWishlist;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)accountIdentifier;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(BOOL)containsItemWithIdentifier:(long long)arg1 ;
-(void)postChangeNotification;
-(void)removeItemsWithItemIdentifiers:(id)arg1 ;
@end

