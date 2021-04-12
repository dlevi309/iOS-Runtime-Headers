/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MRUNowPlayingHeaderView, UIView, MRUVisualStylingProvider, NSString;

@interface MRUViewServiceEndpointTableViewCell : UITableViewCell <MRUVisualStylingProviderObserver> {

	MRUNowPlayingHeaderView* _headerView;
	UIView* _separatorView;
	MRUVisualStylingProvider* _stylingProvider;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) MRUNowPlayingHeaderView * headerView;                  //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                                //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                          //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)separatorView;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(MRUNowPlayingHeaderView *)headerView;
-(void)updateVisualStyling;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
@end

