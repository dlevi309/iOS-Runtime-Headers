/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>

@class NSString, UILabel, UIButton, UIView, UIImageView, UIVisualEffectView;

@interface CKLocationShareBalloonView : CKImageBalloonView {

	long long _offerState;
	NSString* _titleString;
	NSString* _locationString;
	UILabel* _titleLabel;
	UILabel* _locationLabel;
	UIButton* _startSharingButton;
	UIButton* _ignoreButton;
	UIView* _horizontalSeparator;
	UIView* _verticalSeparator;
	UIImageView* _chevron;
	UIVisualEffectView* _effectView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                             //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UIButton * startSharingButton;                                       //@synthesize startSharingButton=_startSharingButton - In the implementation block
@property (nonatomic,retain) UIButton * ignoreButton;                                             //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UIView * horizontalSeparator;                                        //@synthesize horizontalSeparator=_horizontalSeparator - In the implementation block
@property (nonatomic,retain) UIView * verticalSeparator;                                          //@synthesize verticalSeparator=_verticalSeparator - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                                               //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                                     //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic,__weak) id<CKLocationShareBalloonViewDelegate> delegate; 
@property (assign,nonatomic) long long offerState;                                                //@synthesize offerState=_offerState - In the implementation block
@property (nonatomic,copy) NSString * titleString;                                                //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * locationString;                                             //@synthesize locationString=_locationString - In the implementation block
-(UILabel *)titleLabel;
-(void)prepareForDisplay;
-(void)clearFilters;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(UIButton *)startSharingButton;
-(UIView *)horizontalSeparator;
-(UIView *)verticalSeparator;
-(void)_shareButtonHit:(id)arg1 ;
-(void)_ignoreButtonHit:(id)arg1 ;
-(void)setStartSharingButton:(UIButton *)arg1 ;
-(void)setHorizontalSeparator:(UIView *)arg1 ;
-(void)setVerticalSeparator:(UIView *)arg1 ;
-(void)setOfferState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)locationString;
-(UIImageView *)chevron;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(void)configureForLocationShareOfferChatItem:(id)arg1 ;
-(long long)offerState;
-(void)addFilter:(id)arg1 ;
-(void)setDelegate:(id<CKLocationShareBalloonViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(UILabel *)locationLabel;
-(UIButton *)ignoreButton;
-(void)setIgnoreButton:(UIButton *)arg1 ;
@end

