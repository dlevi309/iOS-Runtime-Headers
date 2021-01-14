/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class VUITextLayout;

@interface VUIDownloadedButton : UIButton {

	VUITextLayout* _textLayout;

}

@property (nonatomic,retain) VUITextLayout * textLayout;              //@synthesize textLayout=_textLayout - In the implementation block
+(id)downloadedButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUITextLayout *)textLayout;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

