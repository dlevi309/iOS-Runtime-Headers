/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol STSSuggestionViewDelegate;
@class STSSuggestionFooter, UITableView, UIView;

@interface STSSuggestionView : UIView {

	STSSuggestionFooter* _footerView;
	UITableView* _tableView;
	UIView* _overlayView;
	id<STSSuggestionViewDelegate> _delegate;
	CGPoint _footerOffset;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                       //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGPoint footerOffset;                                       //@synthesize footerOffset=_footerOffset - In the implementation block
@property (assign,getter=isShowingFooter,nonatomic) BOOL showingFooter; 
@property (assign,nonatomic,__weak) id<STSSuggestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_updateContentInsets;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)init;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(id<STSSuggestionViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(UITableView *)tableView;
-(void)setDelegate:(id<STSSuggestionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)footerSize;
-(void)_handleLogoTap:(id)arg1 ;
-(void)_updateFooterOrigin;
-(void)setOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFooterOffset:(CGPoint)arg1 ;
-(BOOL)isShowingFooter;
-(void)setShowingFooter:(BOOL)arg1 ;
-(void)updateFooterImage:(id)arg1 ;
-(CGPoint)footerOffset;
@end

