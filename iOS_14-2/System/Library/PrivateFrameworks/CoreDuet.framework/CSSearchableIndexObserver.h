/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol CSSearchableIndexObserver <NSObject>
@optional
-(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)addUserAction:(id)arg1 withItem:(id)arg2;
-(id)supportedUTIs;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;

@required
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)addOrUpdateSearchableItems:(id)arg1;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;

@end

