/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKAttachmentView.h>
@class CKMediaObject, UIImageView;


@protocol CKAttachmentView <NSObject>
@property (nonatomic,retain) CKMediaObject * mediaObject; 
@property (nonatomic,readonly) UIImageView * iconImageView; 
@required
-(UIImageView *)iconImageView;
-(void)prepareForDisplay;
-(void)setMediaObject:(id)arg1;
-(void)prepareForReuse;
-(CKMediaObject *)mediaObject;

@end


@class CKMediaObject, UIImageView, UILabel, NSString;

@interface CKAttachmentView : UIView <CKAttachmentView> {

	CKMediaObject* _mediaObject;
	UIImageView* _iconImageView;
	UILabel* _actionLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * actionLabel;                    //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)prepareForDisplay;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)icon;
-(id)subtitle;
-(void)setTitle:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)action;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKMediaObject *)mediaObject;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)title;
-(void)configureIconImageView:(BOOL)arg1 ;
@end

