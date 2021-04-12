/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class UIButton, MRUVisualStylingProvider, UIView, NSString;

@interface MRUViewServiceRoutingFooterView : UIView <MRUVisualStylingProviderObserver> {

	UIButton* _button;
	MRUVisualStylingProvider* _stylingProvider;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;                                  //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                     //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)button;
-(UIView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateVisualStyling;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
@end

