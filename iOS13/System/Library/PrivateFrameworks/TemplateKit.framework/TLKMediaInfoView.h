/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>

@class TLKImage, NSArray, TLKImageView, TLKContentsContainerView;

@interface TLKMediaInfoView : TLKView {

	TLKImage* _image;
	NSArray* _contents;
	TLKImageView* _imageView;
	TLKContentsContainerView* _contentsContainer;

}

@property (nonatomic,retain) TLKImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TLKContentsContainerView * contentsContainer;              //@synthesize contentsContainer=_contentsContainer - In the implementation block
@property (nonatomic,retain) TLKImage * image;                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSArray * contents;                                        //@synthesize contents=_contents - In the implementation block
-(NSArray *)contents;
-(TLKImage *)image;
-(void)setImage:(TLKImage *)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(TLKImageView *)imageView;
-(void)setImageView:(TLKImageView *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)setContentsContainer:(TLKContentsContainerView *)arg1 ;
-(TLKContentsContainerView *)contentsContainer;
-(BOOL)imageViewIsHidden;
-(id)titleLabelStrings;
-(id)detailLabelStrings;
@end

