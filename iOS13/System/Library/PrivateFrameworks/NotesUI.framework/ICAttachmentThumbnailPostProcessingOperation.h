/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/ICAttachmentThumbnailOperation.h>

@class UIImage, ICAppearanceInfo, ICThumbnailDataCache, NSString, NSMutableArray, NSURL;

@interface ICAttachmentThumbnailPostProcessingOperation : NSOperation <ICAttachmentThumbnailOperation> {

	BOOL _showAsFileIcon;
	BOOL _isMovie;
	UIImage* _image;
	double _scale;
	ICAppearanceInfo* _appearanceInfo;
	ICThumbnailDataCache* _cache;
	NSString* _cacheKey;
	/*^block*/id _fallbackBlock;
	/*^block*/id _processingBlock;
	NSMutableArray* _completionBlocks;
	NSURL* _mediaURL;
	unsigned long long _imageScaling;
	CGSize _minSize;

}

@property (assign,nonatomic) CGSize minSize;                                 //@synthesize minSize=_minSize - In the implementation block
@property (assign,nonatomic) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) ICAppearanceInfo * appearanceInfo;              //@synthesize appearanceInfo=_appearanceInfo - In the implementation block
@property (nonatomic,retain) ICThumbnailDataCache * cache;                   //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                            //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                                 //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
@property (nonatomic,copy) id processingBlock;                               //@synthesize processingBlock=_processingBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                               //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) BOOL showAsFileIcon;                            //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (assign,nonatomic) BOOL isMovie;                                   //@synthesize isMovie=_isMovie - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
-(void)main;
-(double)scale;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCache:(ICThumbnailDataCache *)arg1 ;
-(ICThumbnailDataCache *)cache;
-(NSMutableArray *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(CGSize)minSize;
-(void)setMinSize:(CGSize)arg1 ;
-(BOOL)isMovie;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(BOOL)showAsFileIcon;
-(void)setShowAsFileIcon:(BOOL)arg1 ;
-(void)setIsMovie:(BOOL)arg1 ;
-(void)setAppearanceInfo:(ICAppearanceInfo *)arg1 ;
-(ICAppearanceInfo *)appearanceInfo;
-(id)fallbackBlock;
-(void)setFallbackBlock:(id)arg1 ;
-(void)setProcessingBlock:(id)arg1 ;
-(id)processingBlock;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(/*^block*/id)arg6 completionBlocks:(id)arg7 fallbackBlock:(/*^block*/id)arg8 ;
-(BOOL)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2 ;
@end

