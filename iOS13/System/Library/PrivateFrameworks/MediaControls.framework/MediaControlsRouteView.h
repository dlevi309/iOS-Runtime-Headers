/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@class NSString, MTVisualStylingProvider, UILabel, CCUICAPackageView;

@interface MediaControlsRouteView : UIView <MTVisualStylingProviderObservingPrivate> {

	BOOL _labelHidden;
	NSString* _title;
	NSString* _packageName;
	MTVisualStylingProvider* _visualStylingProvider;
	UILabel* _titleLabel;
	CCUICAPackageView* _packageView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CCUICAPackageView * packageView;                              //@synthesize packageView=_packageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * packageName;                                       //@synthesize packageName=_packageName - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,getter=isLabelHidden,nonatomic) BOOL labelHidden;                        //@synthesize labelHidden=_labelHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(NSString *)packageName;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(void)setGlyphState:(id)arg1 ;
-(void)setLabelHidden:(BOOL)arg1 ;
-(BOOL)isLabelHidden;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)setPackageName:(NSString *)arg1 ;
-(CCUICAPackageView *)packageView;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
-(void)_updateLabelVisualStyling;
@end

