/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol OS_dispatch_queue;
@class NSObject, CPSImageDownloader;

@interface CPSMapsImageLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CPSImageDownloader* _imageDownloader;

}
-(void)loadImageForMapItemMUID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadImageForGEOStyleAttributes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)_loadImageForGEOFeatureStyleAttributes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

