/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSOperationQueue, NSMapTable;

@interface MPArtworkResizeUtility : NSObject {

	NSObject*<OS_dispatch_queue> _artworkResizingAccessQueue;
	NSOperationQueue* _artworkResizingOperationQueue;
	NSMapTable* _artworkResizingOperations;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> artworkResizingAccessQueue;              //@synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * artworkResizingOperationQueue;                     //@synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * artworkResizingOperations;                               //@synthesize artworkResizingOperations=_artworkResizingOperations - In the implementation block
-(id)init;
-(NSMapTable *)artworkResizingOperations;
-(void)cancelResizeImage:(id)arg1 ;
-(void)setArtworkResizingOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setArtworkResizingOperations:(NSMapTable *)arg1 ;
-(void)setArtworkResizingAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)artworkResizingAccessQueue;
-(id)resizeImage:(id)arg1 scaledFittingSize:(CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 saveToDestinationURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSOperationQueue *)artworkResizingOperationQueue;
@end

