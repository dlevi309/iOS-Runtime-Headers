/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUControlPanelCell.h>

@class NSString;

@interface HUTitleControlCell : HUControlPanelCell

@property (nonatomic,copy) NSString * controlTitle; 
@property (nonatomic,retain) UIView*<HUControlView> controlView; 
-(void)prepareForReuse;
-(UIView*<HUControlView>)controlView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setControlView:(UIView*<HUControlView>)arg1 ;
-(id)allControlViews;
-(void)setControlTitle:(NSString *)arg1 ;
-(NSString *)controlTitle;
@end

