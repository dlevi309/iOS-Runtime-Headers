/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
+(id)databaseTable;
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5 ;
+(id)sortByNameKey;
+(id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4 ;
-(BOOL)isPreorder;
-(BOOL)isFamilyShareable;
-(id)accountIdentifier;
-(long long)contentRatingFlags;
-(BOOL)supportsIPad;
-(BOOL)isHiddenFromSpringBoard;
-(id)ovalIconURLString;
-(BOOL)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
-(id)requiredCapabilitiesString;
-(id)category;
-(BOOL)is32BitOnly;
-(BOOL)hasMessagesExtension;
-(id)description;
-(id)bundleID;
-(id)iconURL;
-(BOOL)isNewsstand;
-(id)iconTitle;
-(id)longTitle;
-(unsigned)minimumOS;
-(id)companyName;
@end

