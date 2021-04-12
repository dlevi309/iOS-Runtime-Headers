/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface MPAVClippingTableViewCell : UITableViewCell {

	BOOL _shouldHideSectionBottomSeparator;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UIView* _clippingContentView;
	UIView* _clippingMaskView;
	UIEdgeInsets _clippingInsets;

}

@property (nonatomic,retain) UIView * clippingContentView;                       //@synthesize clippingContentView=_clippingContentView - In the implementation block
@property (nonatomic,retain) UIView * clippingMaskView;                          //@synthesize clippingMaskView=_clippingMaskView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets clippingInsets;                        //@synthesize clippingInsets=_clippingInsets - In the implementation block
@property (nonatomic,readonly) UIView * topSeparatorView;                        //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparatorView;                     //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSectionBottomSeparator;              //@synthesize shouldHideSectionBottomSeparator=_shouldHideSectionBottomSeparator - In the implementation block
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setClippingInsets:(UIEdgeInsets)arg1 ;
-(UIView *)topSeparatorView;
-(UIView *)bottomSeparatorView;
-(BOOL)shouldHideSectionBottomSeparator;
-(void)setShouldHideSectionBottomSeparator:(BOOL)arg1 ;
-(UIView *)clippingContentView;
-(void)setClippingContentView:(UIView *)arg1 ;
-(UIView *)clippingMaskView;
-(void)setClippingMaskView:(UIView *)arg1 ;
-(UIEdgeInsets)clippingInsets;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

