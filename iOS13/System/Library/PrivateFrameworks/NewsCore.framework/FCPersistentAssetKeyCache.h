/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAssetKeyCacheType.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@class NSString, NSMutableDictionary, NFUnfairLock;

@interface FCPersistentAssetKeyCache : NSObject <FCAssetKeyCacheType, FCCacheFlushing, FCAppActivityObserving> {

	BOOL _flushingEnabled;
	BOOL _needsSave;
	NSString* _cachePath;
	NSMutableDictionary* _cacheEntries;
	NFUnfairLock* _cacheEntriesLock;

}

@property (nonatomic,copy,readonly) NSString * cachePath;                       //@synthesize cachePath=_cachePath - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheEntries;              //@synthesize cacheEntries=_cacheEntries - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * cacheEntriesLock;                 //@synthesize cacheEntriesLock=_cacheEntriesLock - In the implementation block
@property (assign) BOOL flushingEnabled;                                        //@synthesize flushingEnabled=_flushingEnabled - In the implementation block
@property (assign) BOOL needsSave;                                              //@synthesize needsSave=_needsSave - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_persistenceCoder;
-(BOOL)needsSave;
-(void)setNeedsSave:(BOOL)arg1 ;
-(NSMutableDictionary *)cacheEntries;
-(NSString *)cachePath;
-(void)_loadFromDisk;
-(void)_prepareForUse;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)setFlushingEnabled:(BOOL)arg1 ;
-(id)wrappingKeyForWrappingKeyID:(id)arg1 ;
-(void)removeAllWrappingKeys;
-(void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2 ;
-(void)_saveToDisk;
-(NFUnfairLock *)cacheEntriesLock;
-(void)saveIfNeeded;
-(BOOL)flushingEnabled;
-(id)initWithCacheDirectory:(id)arg1 cacheName:(id)arg2 ;
@end

