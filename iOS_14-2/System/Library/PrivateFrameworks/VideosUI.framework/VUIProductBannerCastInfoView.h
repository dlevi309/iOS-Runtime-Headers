/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUICastInfoLayout, IKViewElement, NSArray;

@interface VUIProductBannerCastInfoView : UIView {

	VUICastInfoLayout* _layout;
	IKViewElement* _viewElement;
	NSArray* _labels;

}

@property (nonatomic,retain) VUICastInfoLayout * layout;               //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) NSArray * labels;                         //@synthesize labels=_labels - In the implementation block
+(id)configureViewWithItems:(id)arg1 existingView:(id)arg2 ;
-(void)setLabels:(NSArray *)arg1 ;
-(void)_updateTextColor;
-(NSArray *)labels;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayout:(VUICastInfoLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(VUICastInfoLayout *)layout;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

