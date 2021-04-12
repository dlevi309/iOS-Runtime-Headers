/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setItemID:(id<CKSQLiteItem>)arg1 ;
-(CKDPCSCache *)cache;
-(void)setCache:(CKDPCSCache *)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(id<CKSQLiteItem>)itemID;
@end

