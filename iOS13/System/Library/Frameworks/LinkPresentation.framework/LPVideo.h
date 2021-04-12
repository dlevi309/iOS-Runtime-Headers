/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/LPAsynchronousResource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSData, NSObject, NSItemProvider, AVURLAsset, LPVideoProperties, NSURL, NSString, AVAsset;

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding> {

	NSData* _data;
	NSObject*<OS_dispatch_queue> _mediaLoadingQueue;
	NSItemProvider* _itemProvider;
	LPVideo* _videoLoadedFromItemProvider;
	NSObject*<OS_dispatch_group> _itemProviderLoadGroup;
	CGSize _intrinsicSize;
	AVURLAsset* _asset;
	id _mediaServicesResetNotificationHandler;
	LPVideoProperties* _properties;
	NSURL* _streamingURL;
	NSURL* _youTubeURL;
	NSString* _MIMEType;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,readonly) CGSize _intrinsicSize; 
@property (nonatomic,readonly) AVAsset * _asset; 
@property (nonatomic,retain,readonly) NSItemProvider * _itemProvider; 
@property (nonatomic,retain) NSURL * fileURL;                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * streamingURL;                        //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * youTubeURL;                          //@synthesize youTubeURL=_youTubeURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * MIMEType;                           //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) BOOL hasAudio; 
@property (nonatomic,copy,readonly) LPVideoProperties * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSItemProvider *)_itemProvider;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)MIMEType;
-(LPVideoProperties *)properties;
-(AVAsset *)_asset;
-(CGSize)_intrinsicSize;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)initWithYouTubeURL:(id)arg1 properties:(id)arg2 ;
-(id)initWithStreamingURL:(id)arg1 properties:(id)arg2 ;
-(id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(NSURL *)streamingURL;
-(BOOL)hasAudio;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(BOOL)_shouldEncodeData;
-(void)_mapDataFromFileURL;
-(BOOL)needsAsynchronousLoad;
-(void)loadAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)_encodedSize;
-(id)initWithItemProvider:(id)arg1 properties:(id)arg2 ;
-(NSURL *)youTubeURL;
-(id)initWithYouTubeURL:(id)arg1 ;
-(id)initWithStreamingURL:(id)arg1 hasAudio:(BOOL)arg2 ;
-(void)_uninstallMediaServicesResetNotificationHandler;
-(id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3 ;
-(void)_installMediaServicesResetNotificationHandler;
-(id)_initWithVideo:(id)arg1 ;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3 ;
@end

