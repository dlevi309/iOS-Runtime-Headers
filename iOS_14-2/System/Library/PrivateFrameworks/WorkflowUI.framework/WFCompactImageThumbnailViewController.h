/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactThumbnailViewController.h>

@class UIImageView;

@interface WFCompactImageThumbnailViewController : WFCompactThumbnailViewController {

	double _aspectRatio;
	/*^block*/id _imageGenerator;
	UIImageView* _imageView;
	double _lastViewWidth;

}

@property (nonatomic,readonly) double aspectRatio;                        //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) id imageGenerator;                         //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double lastViewWidth;                        //@synthesize lastViewWidth=_lastViewWidth - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(double)contentHeightForWidth:(double)arg1 ;
-(double)aspectRatio;
-(double)lastViewWidth;
-(void)setLastViewWidth:(double)arg1 ;
-(void)loadView;
-(id)imageGenerator;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithAspectRatio:(double)arg1 imageGenerator:(/*^block*/id)arg2 ;
-(void)redrawImage;
@end

