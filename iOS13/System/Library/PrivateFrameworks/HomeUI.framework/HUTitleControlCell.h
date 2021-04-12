/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUControlPanelCell.h>

@class NSString;

@interface HUTitleControlCell : HUControlPanelCell

@property (nonatomic,copy) NSString * controlTitle; 
@property (nonatomic,retain) UIView*<HUControlView> controlView; 
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView*<HUControlView>)controlView;
-(void)setControlView:(UIView*<HUControlView>)arg1 ;
-(id)allControlViews;
-(void)setControlTitle:(NSString *)arg1 ;
-(NSString *)controlTitle;
@end

