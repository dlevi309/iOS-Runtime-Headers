/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol TVRUIDevice, TVRUIStyleProvider;
@class UIView;

@interface _TVRUIDeviceListCell : UITableViewCell {

	BOOL _showSeparator;
	id<TVRUIDevice> _device;
	id<TVRUIStyleProvider> _styleProvider;
	UIView* _separator;

}

@property (nonatomic,retain) UIView * separator;                                //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) id<TVRUIDevice> device;                            //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) id<TVRUIStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(id<TVRUIDevice>)device;
-(void)layoutSubviews;
-(UIView *)separator;
-(void)setSeparator:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDevice:(id<TVRUIDevice>)arg1 ;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(id<TVRUIStyleProvider>)styleProvider;
-(void)_applyFilterForDevice:(id)arg1 ;
@end

