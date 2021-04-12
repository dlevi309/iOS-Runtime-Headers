/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>

@class UIImageView, UILabel, NSString;

@interface CKTitledImageBalloonView : CKImageBalloonView {

	UIImageView* _chevron;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * chevron;                                             //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) id<CKTitledImageBalloonViewDelegate> delegate; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)configureForLocatingChatItem:(id)arg1 ;
@end

