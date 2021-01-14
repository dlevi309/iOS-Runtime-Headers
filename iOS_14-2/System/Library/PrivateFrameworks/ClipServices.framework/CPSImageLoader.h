/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@class CPSImageDownloader, CPSMapsImageLoader, CPSImageStore;

@interface CPSImageLoader : NSObject {

	CPSImageDownloader* _imageDownloader;
	CPSMapsImageLoader* _mapsImageLoader;
	CPSImageStore* _imageStore;

}

@property (nonatomic,retain) CPSImageDownloader * imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) CPSMapsImageLoader * mapsImageLoader;              //@synthesize mapsImageLoader=_mapsImageLoader - In the implementation block
@property (nonatomic,retain) CPSImageStore * imageStore;                        //@synthesize imageStore=_imageStore - In the implementation block
-(id)init;
-(CPSImageStore *)imageStore;
-(void)setImageStore:(CPSImageStore *)arg1 ;
-(void)loadImageWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadImageForMapItemMUID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadImageForGEOStyleAttributes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CPSImageDownloader *)imageDownloader;
-(CPSMapsImageLoader *)mapsImageLoader;
-(void)setImageDownloader:(CPSImageDownloader *)arg1 ;
-(void)setMapsImageLoader:(CPSMapsImageLoader *)arg1 ;
@end

