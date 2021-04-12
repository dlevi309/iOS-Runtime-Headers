/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUILabelStackTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UIImageView, NSString;

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView> {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIProfileTemplateModel> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
-(id)initWithDataSource:(id)arg1 ;
-(UIImageView *)imageView;
-(void)reloadData;
-(long long)layoutStyle;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)layoutImage;
@end

