/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIView, NSMutableDictionary;

@interface MPAVClippingTableView : UITableView {

	UIView* _headerBackgroundView;
	UIView* _footerBackgroundView;
	NSMutableDictionary* _sectionBackgroundViews;

}

@property (nonatomic,retain) NSMutableDictionary * sectionBackgroundViews;              //@synthesize sectionBackgroundViews=_sectionBackgroundViews - In the implementation block
@property (nonatomic,retain) UIView * headerBackgroundView;                             //@synthesize headerBackgroundView=_headerBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * footerBackgroundView;                             //@synthesize footerBackgroundView=_footerBackgroundView - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)backgroundViewForSection:(unsigned long long)arg1 ;
-(id)_createBackgroundView;
-(UIView *)headerBackgroundView;
-(void)setHeaderBackgroundView:(UIView *)arg1 ;
-(UIView *)footerBackgroundView;
-(void)setFooterBackgroundView:(UIView *)arg1 ;
-(NSMutableDictionary *)sectionBackgroundViews;
-(void)setSectionBackgroundViews:(NSMutableDictionary *)arg1 ;
@end

