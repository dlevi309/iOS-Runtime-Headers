/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class NSString, MRUVisualStylingProvider, UILabel, UIView;

@interface MRURoutingHeaderView : UITableViewHeaderFooterView <MRUVisualStylingProviderObserver> {

	NSString* _title;
	MRUVisualStylingProvider* _stylingProvider;
	UILabel* _titleLabel;
	UIView* _separatorView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                  //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                          //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)separatorView;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)updateVisualStyling;
-(NSString *)title;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
@end

