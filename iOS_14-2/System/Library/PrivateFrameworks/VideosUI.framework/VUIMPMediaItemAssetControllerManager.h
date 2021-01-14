/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VUIMPMediaItemAssetControllerManager : NSObject {

	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
+(id)defaultManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)mediaItemAssetControllerWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 ;
-(id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)arg1 mediaEntityIdentifier:(id)arg2 ;
-(id)mediaItemDownloadControllerWithMediaItem:(id)arg1 ;
@end

