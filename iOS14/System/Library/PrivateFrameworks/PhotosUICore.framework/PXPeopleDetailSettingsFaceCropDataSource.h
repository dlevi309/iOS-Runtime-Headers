/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class PHFetchResult, NSMutableDictionary, NSObject;

@interface PXPeopleDetailSettingsFaceCropDataSource : NSObject {

	PHFetchResult* _fetchResult;
	NSMutableDictionary* _images;
	NSObject*<OS_dispatch_queue> _imagesIsolationQueue;

}

@property (nonatomic,retain) PHFetchResult * fetchResult;                                    //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * images;                                   //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imagesIsolationQueue;              //@synthesize imagesIsolationQueue=_imagesIsolationQueue - In the implementation block
-(PHFetchResult *)fetchResult;
-(id)init;
-(void)setImages:(NSMutableDictionary *)arg1 ;
-(id)nameAtIndexPath:(id)arg1 ;
-(id)imageAtIndexPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)imagesIsolationQueue;
-(void)setImagesIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(NSMutableDictionary *)images;
-(unsigned long long)numberOfAssets;
@end

