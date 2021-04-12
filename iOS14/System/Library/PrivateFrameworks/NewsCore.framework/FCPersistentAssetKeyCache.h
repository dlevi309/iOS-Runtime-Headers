/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NFUnfairLock *)cacheEntriesLock;
-(void)_saveToDisk;
-(void)activityObservingApplicationDidEnterBackground;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(BOOL)flushingEnabled;
-(void)saveIfNeeded;
-(void)_loadFromDisk;
-(void)removeAllWrappingKeys;
-(id)wrappingKeyForWrappingKeyID:(id)arg1 ;
-(BOOL)needsSave;
-(void)_prepareForUse;
-(void)setFlushingEnabled:(BOOL)arg1 ;
-(void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2 ;
-(id)initWithCacheDirectory:(id)arg1 cacheName:(id)arg2 ;
-(void)setNeedsSave:(BOOL)arg1 ;
-(NSMutableDictionary *)cacheEntries;
-(NSString *)cachePath;
@end

