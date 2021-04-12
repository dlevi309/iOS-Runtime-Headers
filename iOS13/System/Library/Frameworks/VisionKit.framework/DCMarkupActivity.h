/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <ShareSheet/UIActivity.h>

@class UIView, UIViewController, ICDocCamDocumentInfo, ICDocCamImageCache;

@interface DCMarkupActivity : UIActivity {

	unsigned long long _inkStyle;
	UIView* _fromView;
	UIViewController* _presentingViewController;
	ICDocCamDocumentInfo* _documentInfo;
	ICDocCamImageCache* _imageCache;
	/*^block*/id _frameBlock;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic,__weak) UIView * fromView;                                        //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) ICDocCamDocumentInfo * documentInfo;                             //@synthesize documentInfo=_documentInfo - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                                 //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,copy) id frameBlock;                                                     //@synthesize frameBlock=_frameBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long inkStyle;                                     //@synthesize inkStyle=_inkStyle - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)activityType;
-(ICDocCamImageCache *)imageCache;
-(UIViewController *)presentingViewController;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(ICDocCamDocumentInfo *)documentInfo;
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setInkStyle:(unsigned long long)arg1 ;
-(void)setFrameBlock:(id)arg1 ;
-(unsigned long long)inkStyle;
-(id)frameBlock;
@end

