/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKBrowserCell.h>

@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {

	UIImageView* _selectionOutline;
	IMBalloonPlugin* _plugin;
	UIImageView* _browserImage;

}

@property (nonatomic,retain) IMBalloonPlugin * plugin;                //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) UIImageView * browserImage;              //@synthesize browserImage=_browserImage - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(id)iconView;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(UIImageView *)browserImage;
-(void)setPlugin:(id)arg1 hideShinyStatus:(BOOL)arg2 ;
-(void)setBrowserImage:(UIImageView *)arg1 ;
-(void)_setImageForPlugin:(id)arg1 ;
-(void)_updateShinyStatus;
@end

