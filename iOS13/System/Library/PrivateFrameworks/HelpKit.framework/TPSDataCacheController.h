/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray, NSUserDefaults, NSMutableDictionary;

@interface TPSDataCacheController : NSObject {

	NSObject*<OS_dispatch_queue> _dataCacheSerialQueue;
	long long _dataType;
	BOOL _backgroundOriginUpdate;
	BOOL _dataCacheDirty;
	float _defaultPriority;
	NSString* _languageCode;
	NSMutableArray* _dataCacheArray;
	unsigned long long _cacheSize;
	unsigned long long _maxDataCacheSize;
	NSString* _identifier;
	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _dataCacheMap;
	NSString* _cacheDirectory;
	NSMutableArray* _originFetchItems;

}

@property (assign,nonatomic) unsigned long long cacheSize;                     //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDataCacheSize;              //@synthesize maxDataCacheSize=_maxDataCacheSize - In the implementation block
@property (assign,nonatomic) BOOL dataCacheDirty;                              //@synthesize dataCacheDirty=_dataCacheDirty - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dataCacheMap;               //@synthesize dataCacheMap=_dataCacheMap - In the implementation block
@property (nonatomic,retain) NSString * cacheDirectory;                        //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,retain) NSMutableArray * originFetchItems;                //@synthesize originFetchItems=_originFetchItems - In the implementation block
@property (assign,nonatomic) float defaultPriority;                            //@synthesize defaultPriority=_defaultPriority - In the implementation block
@property (assign,nonatomic) BOOL backgroundOriginUpdate;                      //@synthesize backgroundOriginUpdate=_backgroundOriginUpdate - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataCacheArray;                  //@synthesize dataCacheArray=_dataCacheArray - In the implementation block
+(id)sharedInstance;
+(void)setAppGroupIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)languageCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)commonInit;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(unsigned long long)cacheSize;
-(NSString *)cacheDirectory;
-(float)defaultPriority;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(void)updateCache;
-(id)dataCacheForIdentifier:(id)arg1 ;
-(id)formattedDataWithFileURL:(id)arg1 ;
-(id)saveFileURL:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long long)arg3 lastModified:(id)arg4 dataCache:(id)arg5 ;
-(id)cacheFileURLForDataCache:(id)arg1 ;
-(id)formattedDataWithData:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4 ;
-(void)setDefaultPriority:(float)arg1 ;
-(BOOL)isURLValid:(id)arg1 ;
-(id)newDataCache;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBackgroundOriginUpdate:(BOOL)arg1 ;
-(id)formattedDataForRequest:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)formattedDataForPath:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelAllOriginSessionItems;
-(void)updateCacheDelay;
-(void)reloadDataCache;
-(NSMutableDictionary *)dataCacheMap;
-(id)cacheFileURLForIdentifier:(id)arg1 ;
-(NSMutableArray *)dataCacheArray;
-(void)removeAllDataCache;
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
-(id)dataCacheForPath:(id)arg1 ;
-(BOOL)cacheValidForIdentifier:(id)arg1 path:(id)arg2 ;
-(void)removeCacheForIdentifier:(id)arg1 ;
-(void)setDataCacheArray:(NSMutableArray *)arg1 ;
-(void)setMaxDataCacheSize:(unsigned long long)arg1 ;
-(void)setDataCacheMap:(NSMutableDictionary *)arg1 ;
-(void)setCacheDirectory:(NSString *)arg1 ;
-(void)setOriginFetchItems:(NSMutableArray *)arg1 ;
@end

