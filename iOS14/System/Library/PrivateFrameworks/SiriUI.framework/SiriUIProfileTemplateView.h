/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(id)initWithDataSource:(id)arg1 ;
-(long long)layoutStyle;
-(void)reloadData;
-(void)layoutImage;
@end

