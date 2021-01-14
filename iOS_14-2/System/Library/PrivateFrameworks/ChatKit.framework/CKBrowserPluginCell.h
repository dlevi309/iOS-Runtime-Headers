/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMBalloonPlugin *)plugin;
-(void)setSelected:(BOOL)arg1 ;
-(void)setPlugin:(id)arg1 hideShinyStatus:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id)iconView;
-(void)setBrowserImage:(UIImageView *)arg1 ;
-(void)_setImageForPlugin:(id)arg1 ;
-(void)_updateShinyStatus;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(UIImageView *)browserImage;
@end

