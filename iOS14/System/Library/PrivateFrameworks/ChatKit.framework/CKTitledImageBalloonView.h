/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>

@class UIImageView, UILabel, UIVisualEffectView, NSString;

@interface CKTitledImageBalloonView : CKImageBalloonView {

	UIImageView* _chevron;
	UILabel* _titleLabel;
	UIVisualEffectView* _effectView;

}

@property (nonatomic,retain) UIImageView * chevron;                                             //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                                   //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) id<CKTitledImageBalloonViewDelegate> delegate; 
-(UILabel *)titleLabel;
-(void)prepareForDisplay;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 hasInvisibleInkEffect:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(UIImageView *)chevron;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(NSString *)title;
-(void)configureForLocatingChatItem:(id)arg1 ;
-(void)setOrientation:(char)arg1 ;
@end

