/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
+(id)databaseTable;
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5 ;
+(id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4 ;
+(id)sortByNameKey;
-(id)description;
-(id)category;
-(id)bundleID;
-(id)accountIdentifier;
-(id)companyName;
-(id)iconURL;
-(BOOL)isPreorder;
-(BOOL)hasMessagesExtension;
-(BOOL)is32BitOnly;
-(long long)contentRatingFlags;
-(id)iconTitle;
-(BOOL)isFamilyShareable;
-(BOOL)isHiddenFromSpringBoard;
-(BOOL)isNewsstand;
-(id)longTitle;
-(unsigned)minimumOS;
-(id)ovalIconURLString;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
-(id)requiredCapabilitiesString;
@end

