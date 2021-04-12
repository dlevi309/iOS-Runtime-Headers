/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
@end

