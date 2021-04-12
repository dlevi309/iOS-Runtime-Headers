/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/ReaderWriterExportController.h>

@class NSDictionary, UIImage, PMTitleSubtitleView;

@interface MiroExportController : ReaderWriterExportController {

	NSDictionary* _titleInformation;
	UIImage* _posterImage;
	/*^block*/id _completionBlock;
	/*^block*/id _progressHandler;
	PMTitleSubtitleView* _titleView;

}

@property (nonatomic,retain) PMTitleSubtitleView * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) NSDictionary * titleInformation;                //@synthesize titleInformation=_titleInformation - In the implementation block
@property (nonatomic,retain) UIImage * posterImage;                        //@synthesize posterImage=_posterImage - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id progressHandler;                             //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(PMTitleSubtitleView *)titleView;
-(void)setTitleView:(PMTitleSubtitleView *)arg1 ;
-(UIImage *)posterImage;
-(id)thumbnailImage;
-(void)setPosterImage:(UIImage *)arg1 ;
-(NSDictionary *)titleInformation;
-(id)titleLayerForVideoComposition:(id)arg1 ;
-(void)createMovieController;
-(void)_setupMovieController;
-(id)_compositionForExport;
-(void)setTitleInformation:(NSDictionary *)arg1 ;
@end

