/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface NUNowPlayingArtworkView : UIView {

	UIImageView* _trackImageView;

}

@property (nonatomic,retain) UIImageView * trackImageView;              //@synthesize trackImageView=_trackImageView - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize; 
-(CGSize)artworkSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTrackImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)trackImageView;
-(CGSize)artworkSizeForTitleViewWidth:(double)arg1 ;
-(void)setTrackImageView:(UIImageView *)arg1 ;
@end

