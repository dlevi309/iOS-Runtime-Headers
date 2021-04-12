/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
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
-(PMTitleSubtitleView *)titleView;
-(void)setTitleView:(PMTitleSubtitleView *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)thumbnailImage;
-(void)setPosterImage:(UIImage *)arg1 ;
-(id)progressHandler;
-(UIImage *)posterImage;
-(CGSize)exportSize;
-(NSDictionary *)titleInformation;
-(id)titleLayerForVideoComposition:(id)arg1 ;
-(void)createMovieController;
-(void)_setupMovieController;
-(id)_compositionForExport;
-(void)setTitleInformation:(NSDictionary *)arg1 ;
@end

