/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@protocol STMSizeCacheDelegate;
#import <StorageSettings/StorageSettings-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSLock, NSArray, NSDictionary;

@interface STMSizeCache : NSObject {

	CFStringRef _prefsKey;
	NSMutableDictionary* _itemsByPath;
	NSMutableArray* _eventsToProcess;
	unsigned long long _cacheEventID;
	id<STMSizeCacheDelegate> _delegate;
	long long _totalSize;
	NSLock* _itemsLock;

}

@property (assign) long long totalSize;                                    //@synthesize totalSize=_totalSize - In the implementation block
@property (retain) NSLock * itemsLock;                                     //@synthesize itemsLock=_itemsLock - In the implementation block
@property (nonatomic,retain) NSArray * items; 
@property (readonly) NSDictionary * itemSizes; 
@property (readonly) unsigned long long itemCount; 
@property (readonly) long long totalSizeOfItems; 
@property (assign,nonatomic) unsigned long long cacheEventID;              //@synthesize cacheEventID=_cacheEventID - In the implementation block
@property (__weak) id<STMSizeCacheDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
-(void)addItem:(id)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setItemsLock:(NSLock *)arg1 ;
-(id<STMSizeCacheDelegate>)delegate;
-(unsigned long long)itemCount;
-(NSArray *)items;
-(void)setDelegate:(id<STMSizeCacheDelegate>)arg1 ;
-(long long)totalSize;
-(void)_flushCache:(id)arg1 ;
-(void)setTotalSize:(long long)arg1 ;
-(NSLock *)itemsLock;
-(void)dealloc;
-(id)createCacheEntryForPath:(id)arg1 ;
-(void)loadCacheFromPref;
-(void)_writeCache;
-(void)sizeItems:(id)arg1 ;
-(void)notifyItemsChanged;
-(void)updateCacheID:(id)arg1 ;
-(void)_updateTotalSize;
-(void)notifySizesChanged;
-(void)flushCacheToPref;
-(id)_sizeEntry:(id)arg1 ;
-(void)processCacheEvents:(id)arg1 ;
-(void)sizeItem:(id)arg1 ;
-(id)initWithPrefsKey:(id)arg1 ;
-(NSDictionary *)itemSizes;
-(long long)totalSizeOfItems;
-(id)sizeOfItem:(id)arg1 ;
-(id)itemsContaining:(id)arg1 ;
-(id)itemsContainedBy:(id)arg1 ;
-(void)processCacheEvent:(id)arg1 ;
-(void)sizeAllItems;
-(void)setCacheEventID:(unsigned long long)arg1 ;
-(unsigned long long)cacheEventID;
@end

