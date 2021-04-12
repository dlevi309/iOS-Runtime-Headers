/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SSWishlist, NSArray;

@interface SKUIWishlist : NSObject {

	SSWishlist* _database;

}

@property (nonatomic,readonly) long long accountIdentifier; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)activeWishlist;
-(void)addItem:(id)arg1 ;
-(long long)accountIdentifier;
-(BOOL)containsItemWithIdentifier:(long long)arg1 ;
-(NSArray *)items;
-(unsigned long long)hash;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)postChangeNotification;
-(void)removeItemsWithItemIdentifiers:(id)arg1 ;
@end

