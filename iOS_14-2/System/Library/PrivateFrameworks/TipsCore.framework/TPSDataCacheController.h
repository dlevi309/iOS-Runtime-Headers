/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject, NSUserDefaults, NSMutableDictionary;

@interface TPSDataCacheController : NSObject {

	long long _dataType;
	BOOL _backgroundOriginUpdate;
	BOOL _dataCacheDirty;
	NSString* _languageCode;
	NSMutableArray* _dataCacheArray;
	unsigned long long _cacheSize;
	unsigned long long _maxDataCacheSize;
	NSObject*<OS_dispatch_queue> _dataCacheSerialQueue;
	NSString* _identifier;
	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _dataCacheMap;
	NSString* _cacheDirectory;
	NSMutableArray* _originFetchItems;

}

@property (assign,nonatomic) unsigned long long cacheSize;                                   //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDataCacheSize;                            //@synthesize maxDataCacheSize=_maxDataCacheSize - In the implementation block
@property (assign,nonatomic) BOOL dataCacheDirty;                                            //@synthesize dataCacheDirty=_dataCacheDirty - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataCacheSerialQueue;              //@synthesize dataCacheSerialQueue=_dataCacheSerialQueue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                  //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dataCacheMap;                             //@synthesize dataCacheMap=_dataCacheMap - In the implementation block
@property (nonatomic,retain) NSString * cacheDirectory;                                      //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,retain) NSMutableArray * originFetchItems;                              //@synthesize originFetchItems=_originFetchItems - In the implementation block
@property (assign,nonatomic) BOOL backgroundOriginUpdate;                                    //@synthesize backgroundOriginUpdate=_backgroundOriginUpdate - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataCacheArray;                                //@synthesize dataCacheArray=_dataCacheArray - In the implementation block
+(id)sharedInstance;
+(void)removeAllDataCache;
+(void)removeDataCacheAtPath:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSString *)cacheDirectory;
-(id)init;
-(unsigned long long)cacheSize;
-(id)dataCacheForIdentifier:(id)arg1 ;
-(id)formattedDataWithFileURL:(id)arg1 ;
-(id)saveFileURL:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long long)arg3 lastModified:(id)arg4 dataCache:(id)arg5 ;
-(id)cacheFileURLForDataCache:(id)arg1 ;
-(id)formattedDataWithData:(id)arg1 ;
-(NSString *)languageCode;
-(void)updateCache;
-(NSUserDefaults *)userDefaults;
-(void)commonInit;
-(BOOL)isURLValid:(id)arg1 ;
-(id)newDataCache;
-(id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4 ;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)formattedDataForPath:(id)arg1 identifier:(id)arg2 attributionIdentifier:(id)arg3 priority:(float)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)cacheFileURLForIdentifier:(id)arg1 ;
-(void)removeAllDataCache;
-(void)setBackgroundOriginUpdate:(BOOL)arg1 ;
-(void)cancelAllOriginSessionItems;
-(NSMutableDictionary *)dataCacheMap;
-(void)updateCacheDelay;
-(void)reloadDataCache;
-(NSMutableArray *)dataCacheArray;
-(void)createCacheDirectory;
-(void)setDataCacheDirty:(BOOL)arg1 ;
-(BOOL)dataCacheDirty;
-(void)removeDataCache:(id)arg1 updateCache:(BOOL)arg2 ;
-(unsigned long long)maxDataCacheSize;
-(NSMutableArray *)originFetchItems;
-(void)removeDataCache:(id)arg1 ;
-(void)addDataCache:(id)arg1 ;
-(BOOL)backgroundOriginUpdate;
-(void)syncCacheImmediately;
-(id)formattedDataForRequest:(id)arg1 identifier:(id)arg2 attributionIdentifier:(id)arg3 priority:(float)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)cacheValidForIdentifier:(id)arg1 ;
-(void)removeCacheForIdentifier:(id)arg1 ;
-(void)setDataCacheArray:(NSMutableArray *)arg1 ;
-(void)setMaxDataCacheSize:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataCacheSerialQueue;
-(void)setDataCacheSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataCacheMap:(NSMutableDictionary *)arg1 ;
-(void)setCacheDirectory:(NSString *)arg1 ;
-(void)setOriginFetchItems:(NSMutableArray *)arg1 ;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)dealloc;
@end

