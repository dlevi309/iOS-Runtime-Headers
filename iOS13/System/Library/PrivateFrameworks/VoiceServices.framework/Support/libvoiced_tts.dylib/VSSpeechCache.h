/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class NSString;

@interface VSSpeechCache : NSObject {

	NSString* _dirPath;
	NSString* _preinstalledCacheDir;

}

@property (nonatomic,retain) NSString * dirPath;                           //@synthesize dirPath=_dirPath - In the implementation block
@property (nonatomic,retain) NSString * preinstalledCacheDir;              //@synthesize preinstalledCacheDir=_preinstalledCacheDir - In the implementation block
+(id)defaultCacheStore;
-(void)cleanCache;
-(id)initWithStorePath:(id)arg1 ;
-(void)deleteCache;
-(NSString *)dirPath;
-(NSString *)preinstalledCacheDir;
-(id)preinstalledCacheForText:(id)arg1 language:(id)arg2 gender:(long long)arg3 ;
-(id)addCache:(id)arg1 ;
-(id)cacheDataForKey:(id)arg1 ;
-(BOOL)isPreinstalledCacheAvailableForRequest:(id)arg1 ;
-(unsigned long long)totalCacheSize;
-(void)setDirPath:(NSString *)arg1 ;
-(void)setPreinstalledCacheDir:(NSString *)arg1 ;
@end

