/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@protocol CKSQLiteItem;
@class CKDPCSCache;

@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo {

	id<CKSQLiteItem> _itemID;
	CKDPCSCache* _cache;
	unsigned long long _options;

}

@property (nonatomic,retain) id<CKSQLiteItem> itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) CKDPCSCache * cache;                     //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(id<CKSQLiteItem>)itemID;
-(void)setCache:(CKDPCSCache *)arg1 ;
-(CKDPCSCache *)cache;
-(void)setItemID:(id<CKSQLiteItem>)arg1 ;
@end

