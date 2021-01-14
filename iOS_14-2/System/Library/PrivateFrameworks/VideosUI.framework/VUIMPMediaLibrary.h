/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIMediaLibrary.h>

@protocol OS_dispatch_queue;
@class MPMediaLibrary, NSObject, NSOperationQueue;

@interface VUIMPMediaLibrary : VUIMediaLibrary {

	unsigned long long _connectionState;
	MPMediaLibrary* _mediaLibrary;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialOperationQueue;

}

@property (assign,nonatomic) unsigned long long connectionState;                                      //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                           //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                                 //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)arg1 ;
-(unsigned long long)connectionState;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(id)title;
-(void)dealloc;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(BOOL)hasImageCache;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(id)initWithMPMediaLibrary:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(void)_handleMediaLibraryStatusDidChangeNotification:(id)arg1 ;
-(void)_enqueueProcessingBlock:(/*^block*/id)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end

