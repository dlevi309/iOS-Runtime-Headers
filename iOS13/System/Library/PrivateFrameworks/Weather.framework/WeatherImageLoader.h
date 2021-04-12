/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


#import <Weather/Weather-Structs.h>
@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject {

	double _scale;
	CPBitmapStore* _store;
	NSCache* _conditionImagesCache;

}

@property (nonatomic,retain) CPBitmapStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSCache * conditionImagesCache;              //@synthesize conditionImagesCache=_conditionImagesCache - In the implementation block
+(id)sharedImageLoader;
+(void)preloadImages;
+(id)conditionImageNamed:(id)arg1 style:(long long)arg2 ;
+(id)conditionImageNameWithConditionIndex:(long long)arg1 ;
+(id)conditionImageWithConditionIndex:(long long)arg1 ;
+(id)conditionImageBundle;
+(id)conditionImageNamed:(id)arg1 size:(CGSize)arg2 cloudAligned:(BOOL)arg3 stroke:(BOOL)arg4 strokeAlpha:(double)arg5 lighterColors:(BOOL)arg6 ;
+(id)colorForImageColor:(id)arg1 lighter:(BOOL)arg2 ;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2 ;
+(id)cachedImageNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(CPBitmapStore *)store;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(NSCache *)conditionImagesCache;
-(id)cachedImageForKey:(id)arg1 ;
-(void)setConditionImagesCache:(NSCache *)arg1 ;
@end

