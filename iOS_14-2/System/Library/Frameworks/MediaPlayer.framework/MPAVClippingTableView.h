/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_createBackgroundView;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setHeaderBackgroundView:(UIView *)arg1 ;
-(void)setSectionBackgroundViews:(NSMutableDictionary *)arg1 ;
-(void)setFooterBackgroundView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)backgroundViewForSection:(unsigned long long)arg1 ;
-(UIView *)headerBackgroundView;
-(UIView *)footerBackgroundView;
-(NSMutableDictionary *)sectionBackgroundViews;
@end

