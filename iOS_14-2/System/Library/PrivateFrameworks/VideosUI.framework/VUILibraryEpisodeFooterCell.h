/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)storeID;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VUILibraryEpisodeFooterCellDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setDelegate:(id<VUILibraryEpisodeFooterCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStoreID:(NSNumber *)arg1 ;
-(NSString *)title;
-(VUIButton *)titleButton;
-(void)setTitleButton:(VUIButton *)arg1 ;
@end

