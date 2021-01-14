/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProductMetadataLayout, VUILabel, NSArray, UIView;

@interface VUIProductSectionView : UIView {

	VUIProductMetadataLayout* _layout;
	VUILabel* _headerView;
	NSArray* _infoViews;
	UIView* _footerView;
	UIView* _defaultFocusView;
	VUILabel* _prototypeInfoHeaderLabel;

}

@property (nonatomic,retain) UIView * defaultFocusView;                        //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (nonatomic,retain) VUILabel * prototypeInfoHeaderLabel;              //@synthesize prototypeInfoHeaderLabel=_prototypeInfoHeaderLabel - In the implementation block
@property (nonatomic,retain) VUIProductMetadataLayout * layout;                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * infoViews;                              //@synthesize infoViews=_infoViews - In the implementation block
@property (nonatomic,retain) UIView * footerView;                              //@synthesize footerView=_footerView - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)footerLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)footerDescriptionWithString:(id)arg1 layout:(id)arg2 maxLine:(unsigned long long)arg3 existingView:(id)arg4 ;
-(BOOL)canBecomeFocused;
-(UIView *)footerView;
-(void)setHeaderView:(VUILabel *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(VUILabel *)headerView;
-(void)setLayout:(VUIProductMetadataLayout *)arg1 ;
-(VUIProductMetadataLayout *)layout;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(void)setInfoViews:(NSArray *)arg1 ;
-(NSArray *)infoViews;
-(VUILabel *)prototypeInfoHeaderLabel;
-(void)setPrototypeInfoHeaderLabel:(VUILabel *)arg1 ;
@end

