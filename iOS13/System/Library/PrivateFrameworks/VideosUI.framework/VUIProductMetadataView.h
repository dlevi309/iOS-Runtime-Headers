/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(VUIProductMetadataLayout *)viewLayout;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(void)setViewLayout:(VUIProductMetadataLayout *)arg1 ;
-(VUIProductInfoAiringView *)airingView;
-(id)_generateSectionViewFromElement:(id)arg1 ;
-(void)updateViewWithSections:(id)arg1 ;
-(void)setAiringView:(VUIProductInfoAiringView *)arg1 ;
-(NSArray *)sectionViews;
-(void)setSectionViews:(NSArray *)arg1 ;
@end

