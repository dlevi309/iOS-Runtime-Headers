/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
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
-(void)setFromView:(UIView *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)activityType;
-(UIView *)fromView;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(ICDocCamImageCache *)imageCache;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(ICDocCamDocumentInfo *)documentInfo;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setInkStyle:(unsigned long long)arg1 ;
-(void)setFrameBlock:(id)arg1 ;
-(unsigned long long)inkStyle;
-(id)frameBlock;
@end

