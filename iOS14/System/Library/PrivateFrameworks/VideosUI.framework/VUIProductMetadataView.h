/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, VUIProductMetadataLayout, UIView, VUIProductInfoAiringView, VUISeparatorView, IKViewElement;

@interface VUIProductMetadataView : UIView {

	NSArray* _sectionViews;
	VUIProductMetadataLayout* _viewLayout;
	UIView* _defaultFocusView;
	VUIProductInfoAiringView* _airingView;
	VUISeparatorView* _separatorView;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) NSArray * sectionViews;                             //@synthesize sectionViews=_sectionViews - In the implementation block
@property (nonatomic,retain) VUIProductMetadataLayout * viewLayout;              //@synthesize viewLayout=_viewLayout - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;                          //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (nonatomic,retain) VUIProductInfoAiringView * airingView;              //@synthesize airingView=_airingView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;                   //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                        //@synthesize viewElement=_viewElement - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(VUISeparatorView *)separatorView;
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(VUIProductMetadataLayout *)viewLayout;
-(void)setViewLayout:(VUIProductMetadataLayout *)arg1 ;
-(VUIProductInfoAiringView *)airingView;
-(id)_generateSectionViewFromElement:(id)arg1 ;
-(void)updateViewWithSections:(id)arg1 ;
-(void)setAiringView:(VUIProductInfoAiringView *)arg1 ;
-(NSArray *)sectionViews;
-(void)setSectionViews:(NSArray *)arg1 ;
@end

