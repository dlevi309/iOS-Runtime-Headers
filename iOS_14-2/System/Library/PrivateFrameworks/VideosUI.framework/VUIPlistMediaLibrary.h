/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@protocol OS_dispatch_queue;
@class VUIPlistMediaDatabase, NSObject, NSOperationQueue;

@interface VUIPlistMediaLibrary : VUIDeviceMediaLibrary {

	VUIPlistMediaDatabase* _database;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) VUIPlistMediaDatabase * database;                                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                                 //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
-(void)setDatabase:(VUIPlistMediaDatabase *)arg1 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
-(VUIPlistMediaDatabase *)database;
-(id)title;
-(void)dealloc;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(id)initWithURL:(id)arg1 manager:(id)arg2 ;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(void)_enqueueProcessingBlock:(/*^block*/id)arg1 ;
-(void)_handleMediaDatabaseContentsDidChangeNotification:(id)arg1 ;
@end

