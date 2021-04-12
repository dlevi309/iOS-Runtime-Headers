/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)title;
-(void)setDatabase:(VUIPlistMediaDatabase *)arg1 ;
-(VUIPlistMediaDatabase *)database;
-(NSOperationQueue *)serialOperationQueue;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
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

