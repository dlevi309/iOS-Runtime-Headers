/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol VUILibraryEpisodeFooterCellDelegate;
@class NSString, NSNumber, VUISeparatorView, VUIButton;

@interface VUILibraryEpisodeFooterCell : UICollectionViewCell {

	NSString* _title;
	NSNumber* _storeID;
	id<VUILibraryEpisodeFooterCellDelegate> _delegate;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;
	VUIButton* _titleButton;

}

@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                                  //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;                               //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) VUIButton * titleButton;                                              //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * storeID;                                                   //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryEpisodeFooterCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VUILibraryEpisodeFooterCellDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryEpisodeFooterCellDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSNumber *)storeID;
-(void)setStoreID:(NSNumber *)arg1 ;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(VUIButton *)titleButton;
-(void)setTitleButton:(VUIButton *)arg1 ;
@end

