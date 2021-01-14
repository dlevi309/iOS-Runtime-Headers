/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(TLKImageView *)arg1 ;
-(void)setImage:(TLKImage *)arg1 ;
-(TLKImageView *)imageView;
-(void)setContentsContainer:(TLKContentsContainerView *)arg1 ;
-(TLKContentsContainerView *)contentsContainer;
-(BOOL)imageViewIsHidden;
-(id)titleLabelStrings;
-(id)detailLabelStrings;
-(TLKImage *)image;
-(void)setContents:(NSArray *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
@end

