/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTImageCache.h>

@protocol AVTImageEncoder, OS_dispatch_queue, AVTUILogger;
@class NSURL, NSFileManager, NSObject, NSString;

@interface AVTImageStore : NSObject <AVTImageCache> {

	BOOL _validateImages;
	NSURL* _location;
	NSFileManager* _fileManager;
	id<AVTImageEncoder> _imageEncoder;
	NSObject*<OS_dispatch_queue> _stateLock;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) NSFileManager * fileManager;                         //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) id<AVTImageEncoder> imageEncoder;                    //@synthesize imageEncoder=_imageEncoder - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;              //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) BOOL validateImages;                                 //@synthesize validateImages=_validateImages - In the implementation block
@property (nonatomic,copy,readonly) NSURL * location;                               //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearContentAtLocation:(id)arg1 logger:(id)arg2 ;
+(id)resourceURLForItem:(id)arg1 scope:(id)arg2 baseURL:(id)arg3 encoder:(id)arg4 ;
-(NSFileManager *)fileManager;
-(id)imageForItem:(id)arg1 scope:(id)arg2 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(NSURL *)location;
-(void)performStateWork:(/*^block*/id)arg1 ;
-(id)initWithEnvironment:(id)arg1 validateImages:(BOOL)arg2 location:(id)arg3 ;
-(BOOL)saveImage:(id)arg1 forItem:(id)arg2 scope:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteImagesForItemsWithPersistentIdentifierPrefix:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyImagesForPersistentIdentifierPrefix:(id)arg1 toPersistentIdentifierPrefix:(id)arg2 error:(id*)arg3 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(BOOL)resourceExistsInCacheForItem:(id)arg1 scope:(id)arg2 ;
-(id<AVTUILogger>)logger;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(id<AVTImageEncoder>)imageEncoder;
-(id)initWithEnvironment:(id)arg1 validateImages:(BOOL)arg2 location:(id)arg3 encoder:(id)arg4 ;
-(BOOL)createDirectoryIfNeeded:(id*)arg1 ;
-(BOOL)validateImages;
-(BOOL)applyFileProtectionForResourceAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id)resourceURLForItem:(id)arg1 scope:(id)arg2 ;
-(BOOL)saveImage:(id)arg1 withImageData:(id)arg2 forItem:(id)arg3 scope:(id)arg4 error:(id*)arg5 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 error:(id*)arg3 ;
@end

