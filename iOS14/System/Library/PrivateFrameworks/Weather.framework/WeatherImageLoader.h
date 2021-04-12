/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)preloadImages;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2 ;
+(id)conditionImageNameWithConditionIndex:(long long)arg1 ;
+(id)cachedImageNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)conditionImageNamed:(id)arg1 size:(CGSize)arg2 cloudAligned:(BOOL)arg3 stroke:(BOOL)arg4 strokeAlpha:(double)arg5 lighterColors:(BOOL)arg6 ;
+(id)conditionImageBundle;
+(id)conditionImageWithConditionIndex:(long long)arg1 ;
+(id)conditionImageNamed:(id)arg1 style:(long long)arg2 ;
+(id)sharedImageLoader;
+(id)colorForImageColor:(id)arg1 lighter:(BOOL)arg2 ;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(id)init;
-(CPBitmapStore *)store;
-(NSCache *)conditionImagesCache;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)cachedImageForKey:(id)arg1 ;
-(void)setConditionImagesCache:(NSCache *)arg1 ;
@end

